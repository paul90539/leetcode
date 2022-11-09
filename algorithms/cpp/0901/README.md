# 901. Online Stock Span

[Problem Link](https://leetcode.com/problems/online-stock-span/description/)

## Solution

* 這題基本上就是堆疊的應用
* 當進來的數大於等於top就進行pop
* 紀錄該數的count是因為如果之後來一個更大於的數，前面比他小的一定都能大於，所以不用多做比較，直接加count，再push進去，也是這樣前面比他小的才都可以pop掉，以減少計算量

算法效率: O(n)<br>
