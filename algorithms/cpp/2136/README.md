# 2136. Earliest Possible Day of Full Bloom

[Problem Link](https://leetcode.com/problems/earliest-possible-day-of-full-bloom/)

## Solution

* 這題基本上是難在邏輯問題上，而非演算法
* 問給予每盆花所需的plantTime與growTime，問最短能讓所有植物都開花的時間
* plantTime一天只能一次，而growTime可以並行處理
* 因此plantTime長短並不能影響結果，而growTime可以平行處裡的話，growTime越長的越早做越好，因此以growTime做由大到小的排列，然後用加總並判斷所需要的時間

算法效率: O(n*log(n))<br>
