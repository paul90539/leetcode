# 976. Largest Perimeter Triangle

[Problem Link](https://leetcode.com/problems/largest-perimeter-triangle/)

## Solution

* 這題從數組中找出能形成三角形的最大三邊
* 那首先一定要排序，在從最大三個值一路查詢到最小，中途有符合三邊公式就回傳為結果
* 一定是以當前最大三值做比較，因為次大跟第三大相加都不能大於最大的話，其他組合也一定不可能


算法效率: O(n*log(n))<br>
