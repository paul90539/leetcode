# 1155. Number of Dice Rolls With Target Sum

[Problem Link](https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/)

## Solution

* 此解法是由bottom-up的形式建立DP
* 1D-DP為目標想要骰到的點數
* 以每一次骰骰子的動作分開統計
* 將對應能骰到的解與過去的解加總，就會是新的數量
* 反覆統計每一次骰子的結果，便能得到最終解

## Hint

* 該方法有簡略掉骰出點數大小的for迴圈
* 理論上要統計骰出不同點數(k)去遞歸DP
* 但可以以該目標數字，向前加總k個數值，也能達到一樣的意思

算法效率: O(n^2)<br>
