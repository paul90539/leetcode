# 132. Palindrome Partitioning II

[Problem Link](https://leetcode.com/problems/palindrome-partitioning-ii/)

## Solution

* 這題基本上不能暴力解，暴力解要承受O(n^3)的時間複雜度
* 核心概念就是用DP，以索引的起始座標當作二維DP的x, y，如DP[1][3]等同於子字串(1,3)的解
* 但這只是記錄了曾經做過的解，避免重複運算，雖然快了一點，但還是O(n^3)

[二維DP的解](https://leetcode.com/problems/palindrome-partitioning-ii/discuss/1364206/MCM-Pattern-(In-Aditya-Verma-Format)-with-some-Optimizations-or-All-TC-Passed-or-Memorization)

* 於是有大神級的一維DP解法
* DP所記錄的是0到現在位置的最少切法，如DP[3]等同於子字串(0,3)的解
* 迭代時，會以新加入的點為中心，觀察是否能在左右形成一個奇數或偶數的Palindrome
* 再來比較(形成之後加上剩餘區塊的解)是否小於(不選擇形成直接上一次結果+1)，小者為該點的DP
* 以此一路推導，到DP尾端便是完整字串的最少切法數了

```
                   |
                   V
DP = [... , 9,  3, ?, ?,  ...]

DP = [... , 9, [3, ?, ?], ...]

DP = [... , 9,  3, 4, ?, ....]
雖然箭頭處有形成Palindrome，但形成的結果不如不要形成，所以選擇上一個解+1
```

[一維DP的解](https://leetcode.com/problems/palindrome-partitioning-ii/discuss/1239122/C%2B%2B-DP-8ms-Short-and-simple)

算法效率: O(n^2)<br>
