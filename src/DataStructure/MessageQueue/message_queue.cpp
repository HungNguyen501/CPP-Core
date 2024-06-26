#include <stdexcept>
#include "../Queue/queue.h"

namespace mrroot501 {

template <class T>
class MessageQueue : public Mrroot501Queue<Message<int>> {
public:
    long byte_size, byte_capacity;
    MessageQueue() {};
    MessageQueue(int max_length, int byte_capacity) {
        this->max_length = max_length;
        this->byte_capacity = byte_capacity;
        this->head = this->tail = this->length = 0;
        this->byte_size = 0;
        this->arr = new T[1000000];
    }
    long getByteSize() {
        return this->byte_size;
    }
    bool isFull() {
        return (this->max_length == this->length || this->byte_capacity <= this->byte_size);
    }
    void enqueue(T value, bool forced = false) {
        if (value.byte_size > this->byte_capacity) {
            throw std::invalid_argument("Message size is larger than queue capacity.");
        }
        if (forced) {
            while (isFull() || this->byte_size + value.byte_size > this->byte_capacity) {
                Message<int> temp = this->dequeue();
                std::cout << "size=" << this->getSize() << ", byte_size=" << this->byte_size << "\n";
            }
        }
        else if (isFull() || this->byte_size + value.byte_size > this->byte_capacity) {
            std::cout << "Cannot enqueue beacause queue is full.\n";
            return;
        }
        this->length++;
        this->byte_size += value.byte_size;
        this->arr[this->tail % this->max_length] = value;
        this->tail = this->tail % this->max_length + 1;
    };
    T front() {
        if (this->isEmpty()) {
            return T();
        }
        return this->arr[this->head];
    }
    T dequeue() {
        if (this->isEmpty()) {
            std::cout << "Queue is empty.\n";
            return T();
        }
        T temp = this->front();
        this->length--;
        this->byte_size -= temp.byte_size;
        this->head = (this->head + 1) % this->max_length;
        return temp;
    }
};

template class MessageQueue<Message<int>>;

} // namespace mrroot501
