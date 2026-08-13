# [Binary Heap Operations](https://www.geeksforgeeks.org/problems/operations-on-binary-min-heap/1)
## Medium
Given an initially empty Binary Min Heap and a list of queries. Process each query by performing the corresponding heap operation.
The queries are of the following types:

[1, x]: Insert the value x into the Binary Min Heap.
[2, x]: Delete the element present at index x in the current Binary Min Heap. If the index is invalid, ignore the query.
[3]: Remove and return the minimum element from the Binary Min Heap. If the heap is empty, return -1.

Implement the following methods:

insertKey(x): Inserts x into the Binary Min Heap.
deleteKey(i): Deletes the element at index i from the Binary Min Heap.
extractMin():&nbsp;Removes and returns the minimum element from the Binary Min Heap, or -1 if the heap is empty.

The driver code will invoke these methods according to the given queries.
Examples :
Input: queries[][] = [[1, 4], [1, 2], [3], [1, 6], [2, 0], [3], [3]]
Output: [2, 6, -1]
Explanation:
- Initially, the Min Heap is empty.
- Insert 4. The heap contains 4.
- Insert 2. The heap is rearranged to satisfy the Min Heap property, with 2 at the root.
- Extract the minimum element. The value 2 is removed and printed.
- Insert 6. The heap contains 4 and 6.
- Delete the element at index 0. The value 4 is removed, leaving only 6 in the heap.
- Extract the minimum element. The value 6 is removed and printed.
- Extract the minimum element again. Since the heap is empty, -1 is returned.

Input: queries[][] = [[1, 8], [1, 9], [2, 1], [3], [3]]
Output: [8, -1]Explanation:- Initially, the Min Heap is empty.
- Insert 8. The heap contains 8.
- Insert 9. The heap contains 8 and 9.
- Delete the element at index 1. The value 9 is removed, leaving only 8 in the heap.
- Extract the minimum element. The value 8 is removed and printed.
- Extract the minimum element again. Since the heap is empty, -1 is returned.
