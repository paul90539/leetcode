# 4. Median of Two Sorted Arrays

[Problem Link](https://leetcode.com/problems/median-of-two-sorted-arrays/)

## Solution

* 暴力解非常的簡單，O(m+n)就能搞定，算式也不會太複雜
* 研究了一下最佳解需要使用Divide and Conquer的概念，於是應用了Binary Search解題
* 題目期望找到兩組已排序數列合併後的中位數

1. 找出較短的數列m以他為主，另一數組則為n
2. 將m以中心切一刀，分成兩塊，n數組也進行切分，切分位置必須滿足在加到m的兩分塊時，兩邊數量能夠平衡
3. 觀察m和n的數組切面是否有彼此符合排序定義，即左邊的max(m,n)要小於右邊的min(m,n)
4. 符合則計算中位數直接輸出
5. 不符合則依照m的大小決定往左或往右重新找中心線再切一刀
6. 若m1 > n2則往左切, m2 < n1則往右切，再來重複回第三步驟，直到找到解

... m1  ||  m2 ...<br>
... n1  ||  n2 ...<br>

[此題的詳細解說影片](https://www.youtube.com/watch?v=LPFhl65R7ww)

算法效率: O(log(min(num1, num2)))<br>

