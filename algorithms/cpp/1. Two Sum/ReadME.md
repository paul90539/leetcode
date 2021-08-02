# 1. Two Sum

[Problem Link](https://leetcode.com/problems/two-sum/submissions/)

## Solution

* 題目已經說"exactly one solution"，不用考慮多種組合的問題

1.未排序過的陣列<br>
2.進行排序<br>
3.對排序好的陣列尋找兩數和，分成頭跟尾兩個指標依序向內尋找<br>
4.用找到的數字回去找他在未排序的陣列中的確切位置<br>

算法效率: O(n\*log(n))<br>
