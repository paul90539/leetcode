# 429. N-ary Tree Level Order Traversal

[Problem Link](https://leetcode.com/problems/n-ary-tree-level-order-traversal/)

## Solution

* 可以使用遞迴的方式解題
* 每次遞迴向下時，有連著當前層數一起傳遞
* 每個節點都能得到自己正確的層數，最存到對應的索引就完成了

算法效率: O(n)<br>
