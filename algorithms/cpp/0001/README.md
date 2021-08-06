# 1. Two Sum

[Problem Link](https://leetcode.com/problems/two-sum/submissions/)

## Solution

* 題目已經說"exactly one solution"，不用考慮多種組合的問題

1. 建立一個hashtable，紀錄target與當前num的差值，差值作為key，而num的index作為value
2. 後續找遍歷num時，先去使用num去查hashtable裡是否有對應的key，有則找到最佳解，無則同1步驟加入到hashtable中

算法效率: O(n)<br>
