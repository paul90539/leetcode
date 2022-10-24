# 1239. Maximum Length of a Concatenated String with Unique Characters

[Problem Link](https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/)

## Solution

* 此題就是要景可能的把不重複出現的字母字串串在一起，回傳最大長度
* 不確定有沒有剪枝的方法，但最少可以用DFS走訪完所有情況
* 但有另一向加速的方式就是將字串轉成二進制，由於範圍只有字母，那二進制長度只會有26位元
* 只要利用and就能判斷兩字串時否有相同字元
* 只要利用or就能連接兩字串
* 將O(26) -> O(1)

算法效率: O(n^2)<br>
