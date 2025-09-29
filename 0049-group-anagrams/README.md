<h2><a href="https://leetcode.com/problems/group-anagrams/">49. Group Anagrams</a></h2>
<h3>Difficulty: Medium</h3>
<hr>

Given an array of strings `strs`, group the anagrams together. You can return the answer in **any order**.

**Example 1:**

**Input:** strs = ["eat","tea","tan","ate","nat","bat"]

**Output:** [["bat"],["nat","tan"],["ate","eat","tea"]]

**Explanation:**

* There is no string in strs that can be rearranged to form `"bat"`.
* The strings `"nat"` and `"tan"` are anagrams as they can be rearranged to form each other.
* The strings `"ate"`, `"eat"`, and `"tea"` are anagrams as they can be rearranged to form each other.

**Example 2:**

**Input:** strs = [""]

**Output:** [[""]]

**Example 3:**

**Input:** strs = ["a"]

**Output:** [["a"]]

**Constraints:**

* `1 <= strs.length <= 104`
* `0 <= strs[i].length <= 100`
* `strs[i]` consists of lowercase English letters.

<br>
<hr>
<h3>Tags</h3>
<p>Array, Hash Table, String, Sorting</p>

<h3>Complexity</h3>
<ul>
  <li><strong>Time Complexity:</strong> $O()$ </li>
  <li><strong>Space Complexity:</strong> $O()$ </li>
</ul>
