# 5. Longest Palindromic Substring

[Problem Link](https://leetcode.com/problems/longest-palindromic-substring/)

## Solution

* 題目要找最長的palindromic substring

1. 依序以字串的每個節點做為中心去向外擴展，檢查以其為中心最大的palindromic長度
2. 向外擴展需分為長度為奇數與偶數兩種狀況才方便實作
3. 最後的最大長度即為解

* 當然，這題也是可以用DP解，palindromic題型的問題DP幾乎都能解

算法效率: O(n^2)<br>
