# 2131. Longest Palindrome by Concatenating Two Letter Words

[Problem Link](https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/)

## Solution

* 這題給定一組字串長度固定為2的字串組，試問可以組合出的最大回文(Palindrome)長度
* 由於有了長度2的限制，所以只要統計正向反向的字串組數量，以及字串為兩個相同文字的數量
* 中心必定為兩個相同文字，但最多只能放置一次
* 程式碼中ver.1的寫法屬於直接迴圈統計數量求解，O(n^2)
* 程式碼中ver.2的寫法跟ver.1一樣，不同的是直接拿輸入字串當visited來用，所以不用額外宣告陣列，Space less than直接跑到95.08%，哈哈，但**修改輸入參數不是良好的設計習慣**，玩玩看看就好
* 程式碼中ver.3的寫法屬於先統計好字串類別，在統計能形成Palindrome的數量，這樣做能比註解的做法少掉很多if判斷，速度快2倍左右

算法效率: O(n + 26 * 26)<br>
