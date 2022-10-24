# 2095. Delete the Middle Node of a Linked List

[Problem Link](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/)

## Solution

* 這題基本上跟[876. Middle of the Linked List](..\0876)是一樣的，876是找中心點，這個是刪除中心點
* 同樣套用快慢指針就能找到中心點
* 因為目標是要刪除，所以變成要找中心點的前一點，在實現上只要讓快指針先走一步就能達到這個結果

算法效率: O(n)<br>
