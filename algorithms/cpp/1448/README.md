# 1448. Count Good Nodes in Binary Tree

[Problem Link](https://leetcode.com/problems/count-good-nodes-in-binary-tree/)

## Solution

* 題目意思等同於root到任意node時，若該node大於等於路徑上所有點，則表示該點為good，統計樹中good的節點數
* 所以只要設置一個迭代，每次都會傳入路徑的最大值，而每個點都檢查是不是大於該值，是就回傳+1

算法效率: O(n)<br>
