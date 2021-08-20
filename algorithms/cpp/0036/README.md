# 36. Valid Sudoku

[Problem Link](https://leetcode.com/problems/valid-sudoku/)

## Solution

* 只要考慮當前給的數字是否違反數獨規則就好
* 因此只要分成三類(row, col, box)，檢查是否重複就結束了

算法效率: O(n^2)<br>
