# 303. Range Sum Query - Immutable

[Problem Link](https://leetcode.com/problems/range-sum-query-immutable/)

## Solution

* 這題直接寫很簡單，就是問陣列的某區間的和為多少而已，最多O(n)
* 但有種作法能跟快速找到區間總和，就是先建立好0~所有元素的和的陣列
* 這樣只要做一次相減就能找到和

```
example
N = [ n0, n1, n2, n3, n4 ]

O(n)
建立和的陣列 
N_SUM = [ n0, 
          n0 + n1,
          n0 + n1 + n2,
          n0 + n1 + n2 + n3,
          n0 + n1 + n2 + n3 + n4 ]

O(1)
找(2, 5):
N_SUM[5] - N_SUM[2 - 1] = ( n0 + n1 + n2 + n3 + n4 ) - ( n0 + n1 ) = n2 + n3 + n4
```

* 只有第一次初始化要O(n)，之後計算都只要O(1)
* 這個概念延伸2D就是積分影像(Integral Image)的應用了


算法效率: 初始化: O(n)、計算: O(1)<br>
