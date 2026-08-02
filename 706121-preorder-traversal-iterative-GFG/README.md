# [Preorder traversal (Iterative)](https://www.geeksforgeeks.org/problems/preorder-traversal-iterative/1)
## Medium
Given a Binary tree. Find the preorder traversal of the tree without using recursion.
Follow up: Try solving this with O(1) auxiliary space.
Examples:
Input: root = [1, 2, 3, 4, 5]Output: [1, 2, 4, 5, 3]
Explanation:
Preorder traversal (Root-&gt;Left-&gt;Right) of
the tree is 1 2 4 5 3.

Input: root = [8, 1, 5, N, 7, 10, 6, N, 10, 6]Output: [8, 1, 7, 10, 5, 10, 6, 6]&nbsp;
Explanation:
Preorder traversal (Root-&gt;Left-&gt;Right) 
of the tree is 8 1 7 10 5 10 6 6.
Constraints:1 ≤ Number of nodes ≤ 1050 ≤ node-&gt;data ≤ 105