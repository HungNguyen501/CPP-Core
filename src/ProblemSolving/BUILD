# load("@buildifier_prebuilt//:rules.bzl", "buildifier")
load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")

package(default_visibility = ["//visibility:public"])

# Tests
cc_test(
    name = "extra_long_factorial_test",
    timeout="short",
    srcs = ["ExtraLongFactorial/main.cpp"],
    deps = [
        "@gtest",
        "@gtest//:gtest_main",
    ],
)

cc_test(
    name = "longest_common_subsequence_test",
    timeout="short",
    srcs = ["LongestComonSubsequence/main.cpp"],
    deps = [
        "@gtest",
        "@gtest//:gtest_main",
    ],
)

cc_test(
    name = "longest_palindromic_substring_test",
    timeout="short",
    srcs = ["LongestPalindromicSubstring/main.cpp"],
    deps = [
        "@gtest",
        "@gtest//:gtest_main",
    ],
)

cc_test(
    name = "range_sum_queries_without_updates_test",
    timeout="short",
    srcs = ["RangeSumQueriesWithoutUpdates/main.cpp"],
    deps = [
        "@gtest",
        "@gtest//:gtest_main",
    ],
)

cc_test(
    name = "shortest_path_in_binary_matrix_test",
    timeout="short",
    srcs = ["ShortestPathInBinaryMatrix/main.cpp"],
    deps = [
        "@gtest",
        "@gtest//:gtest_main",
    ],
)

cc_test(
    name = "find_largest_value_in_tree_row_test",
    timeout="short",
    srcs = ["FindLargestValueInTreeRow/main.cpp"],
    deps = [
        "//src/DataStructure:binary_tree_lib",
        "@gtest",
        "@gtest//:gtest_main",
    ],
)

cc_test(
    name = "merge_k_sorted_arrays_test",
    timeout="short",
    srcs = ["MergeKSortedArrays/main.cpp"],
    deps = [
        "//src/Algorithms:heap_sort_lib",
        "@gtest",
        "@gtest//:gtest_main",
    ],
)
