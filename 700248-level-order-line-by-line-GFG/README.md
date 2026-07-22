# [Level Order Line by Line](https://www.geeksforgeeks.org/problems/level-order-traversal-line-by-line/1)
## Easy
Given root of a binary Tree,&nbsp; return its level order traversal.Examples:
Input: root = [1, 2, 3, 4, 5, 6, 7, N, N, N, N, N, 8]
 &nbsp; &nbsp; &nbsp;   &nbsp; &nbsp; &nbsp; 
Output: [[1], [2, 3], [4, 5, 6, 7], [8]]
Explanation:  At first level 1 present then at second level 2 3 present at third level 4 5 6 7 present and at fourth level 8 present.
Input: root = [10, 20, 30, 40, 60]
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  &nbsp; &nbsp; &nbsp; &nbsp; 
Output: [[10], [20, 30] , [40, 60]] Explanation: At first level 10 present then at second level 20 30 present then at third level 40 60 present.
Constraints:1 ≤ number of nodes ≤ 10000 ≤ node-&gt;data ≤ 100