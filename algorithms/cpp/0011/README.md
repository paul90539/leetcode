# 11. Container With Most Water

[Problem Link](https://leetcode.com/problems/container-with-most-water/)

## Solution

* 基本上由設定最左最右後，慢慢向內縮小範圍就能找到最大面積了
* 由於面積取左右的最小高度，故高的一邊內縮只會更小，因此每次迭代都選擇低的一邊向內縮
* 比較每次內縮後的面積，保留最大變為解

算法效率: O(n)<br>
