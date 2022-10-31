# 49. Group Anagrams

[Problem Link](https://leetcode.com/problems/group-anagrams/)

## Solution

* 這題是要將相同元素但不同排列的字串進行歸類
* 首先一定是排序所有字串，才有辦法做後續分類，再來用hashTable去做歸類就好了
* 應該有辦法不用排序字串，用適當的Encode方法取代應該可以，但不想花那麼大的力氣去思考這解法

算法效率: O(n*log(n))<br>
