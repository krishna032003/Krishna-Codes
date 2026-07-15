# [Median of 2 Sorted Arrays of Different Sizes](https://www.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1)
## Hard
Given two sorted arrays a[] and b[], find and return the median of the combined array after merging them into a single sorted array.
Examples:
Input: a[] = [3, 5, 6, 12, 15], b[] = [3, 4, 6, 10, 10, 12]
Output: 6
Explanation: The merged array is [3, 3, 4, 5, 6, 6, 10, 10, 12, 12, 15]. So the median of the merged array is 6.
Input: a[] = [2, 3, 5, 8], b[] = [10, 12, 14, 16, 18, 20]Output: 11Explanation: The merged array is [2, 3, 5, 8, 10, 12, 14, 16, 18, 20]. So the median of the merged array is (10 + 12) / 2 = 11.
Input: a[] = [], b[] = [2, 4, 5, 6]
Output: 4.5Explanation: The merged array is [2, 4, 5, 6]. So the median of the merged array is (4 + 5) / 2 = 4.5.
