# 692. Top K Frequent Words

[Problem Link](https://leetcode.com/problems/top-k-frequent-words/)

## Solution

* 此題解題方向很清晰，就是實現的動作較繁複一點
* 解法是先用HashMap統計string數量
* 在將統計結果導向vector去做sort
* 最後輸出前k個最常用的字串，結束

## Others

* 又遇到了，字串複製導致的效能問題，狀況如下
``` cpp
result.push_back(pair_order[count].first); // faster
//result[count] = pair_order[count].first; // slower
```
* 結論是用'='去複製字串真的會很慢，看來能避免就要避免

算法效率: O(n*log(n))<br>
