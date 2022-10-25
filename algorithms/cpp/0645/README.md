# 645. Set Mismatch

[Problem Link](https://leetcode.com/problems/set-mismatch/)

## Solution

* 這題必定只有一組重複的數字，其他例外不需要考慮
* 快速的解法是用indexing technique的做法，間單來說就像是hash table
``` cpp
0. 初始形式是這樣: 
index: 1 2 3 4 
opera: 4 1 2 1
1. 走第1次，要去找idx=4，乘上-1作為走過的標記
opera: 4 1 2 -1
2. 走第2次，要去找idx=1，乘上-1作為走過的標記
opera: -4 1 2 -1
3. 走第3次，要去找idx=2，乘上-1作為走過的標記
opera: -4 -1 2 -1
4. 走第4次，要去找idx=1，乘上-1作為走過的標記，會發現4已經被走過了，因此記1為重複數值

那另一個重複數值的index就會是opera為正數+1
```

算法效率: O(n)<br>
