# 3. Longest Substring Without Repeating Characters

[Problem Link](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

## Solution

* 以不修改到傳入參數為主，都會以其他參數嫁接後使用。
* 找出字元不重複的最長子字串

1. 建字元表，紀錄目前讀到的字元
2. 同時也建一個佇列，紀錄讀取順序
3. 當讀到重複字元時，紀錄當前佇列長度，若比以前紀錄的長度還大，則取代
4. 佇列依序pop出字元，直到pop掉重複的字元才會停止
5. 繼續讀取剩餘字元，當重複時回到步驟3，直到整個字串讀取完畢
6. 輸出為紀錄的最大佇列長度

該算法最多對只會對每個元素各做一次push和pop，
所以時間複雜度並不會是O(n^2)，而會是O(n+n)=O(n)

算法效率: O(n)<br>
