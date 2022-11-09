# 899. Orderly Queue

[Problem Link](https://leetcode.com/problems/orderly-queue/)

## Solution

* 這題看起來複雜其實邏輯想通很簡單
* 只需要看兩個CASE，k=1和k>1
* k>1的情況必定能保證字串可以完整進行排序，所以直接sort就好了
* k=1的情況就是把字串自己接自己，在依序走訪就能找到最佳長度了

## Others
* 程式並沒有自己寫，是因為這個寫法很有參考性
* string_view，C++17的型態，類似string的指標版本
* reserve，預先擴大string可配置空間，配置空間原理水很深，從vector那邊看起還比較全面

算法效率: O(n)<br>
