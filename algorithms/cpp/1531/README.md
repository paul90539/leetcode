# 1531. String Compression II

[Problem Link](https://leetcode.com/problems/string-compression-ii/)

## Solution

* [此題的DP詳細解說影片](https://www.youtube.com/watch?v=UIK00l_AiPQ)
* 下面只描述最佳解的做法，影片中的大神有提到暴力解、一般解以及最佳解，建議看影片會更好懂
* 此題可以視為是一種2D-DP，兩維分別為目前在字串的哪個位置(i)，以及還能刪除幾個元素(k)
* 由於字串長度上限為100，可以有效預設編碼長度只會在0->1，1->2, 9->10，99->100時發生變化
* 在一個run_dp內，都是在檢查相同的字元，而在迭代另一個run_dp時，去統計其他字元的結果，以此找完2D-DP的表
* 因此算法效率最差就2D找滿 => O(n^2)

## P.S.
* 程式碼中有針對min是否是以巨集實現進行探討
* 若是以巨集實現，並且我們把function放置在min中間的話
* 展開後會變成要做兩次function，變向增加計算時間
* 不過std::min不是用巨集實現，所以也不用考慮這個啦

算法效率: O(n^2)<br>
