# 433. Minimum Genetic Mutation

[Problem Link](https://leetcode.com/problems/minimum-genetic-mutation/)

## Solution

* 這題是一種BFS的應用，很有趣
* 擴展方式就是每次都找與自己差一個文字的字串，找到時都會去檢查是不是END，找完一輪就step加1
* 解法要快就需要用到Hashtable去查表，還有各種STL的指令，不然會很冗長
* 下次在有機會會在重新改寫一下答案

算法效率: O(n)<br>
