# leetcode

## 前言

自己寫過的題目紀錄，不一定會是最佳解，<br>
而且有一部份的個人習慣影響，像是會很想避免使用hashMap，<br>
主要只是想留存一些程式與解題思路，方便以後回憶算法。<br>

## Problem List

|  #  |      Title     |   Solutions   | Video  | Difficulty  | Tag                  
|-----|----------------|---------------|--------|-------------|-------------
|954|[Array of Doubled Pairs](https://leetcode.com/problems/array-of-doubled-pairs/)|[Solution](./algorithms/cpp/0954/0954.cpp)||Medium|HashMap
|926|[Flip String to Monotone Increasing](https://leetcode.com/problems/flip-string-to-monotone-increasing/)|[Solution](./algorithms/cpp/0926/0926.cpp)||Medium|DP
|877|[N-ary Tree Level Order Traversal](https://leetcode.com/problems/stone-game/)|[Solution](./algorithms/cpp/0877/0877.cpp)||Medium|Rcursive, Tree
|429|[Stone Game](https://leetcode.com/problems/n-ary-tree-level-order-traversal/)|[Solution](./algorithms/cpp/0429/0429.cpp)|[2Dimension-DP](https://www.youtube.com/watch?v=WxpIHvsu1RI)|Medium|DP
|415|[Add Strings](https://leetcode.com/problems/add-strings/)|[Solution](./algorithms/cpp/0415/0415.cpp)||Easy|
|132|[Palindrome Partitioning II](https://leetcode.com/problems/palindrome-partitioning-ii/)|[Solution](./algorithms/cpp/0132/0132.cpp)|[2Dimension-DP](https://www.youtube.com/watch?v=lDYIvtBVmgo)|Hard|DP
|11|[Container With Most Water](https://leetcode.com/problems/container-with-most-water/)|[Solution](./algorithms/cpp/0011/0011.cpp)||Medium|
|5|[Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)|[Solution](./algorithms/cpp/0005/0005.cpp)||Medium|DP
|4|[Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)|[Solution](./algorithms/cpp/0004/0004.cpp)|[Binary Search](https://www.youtube.com/watch?v=LPFhl65R7ww)|Hard|Divide and Conquer
|3|[Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)|[Solution](./algorithms/cpp/0003/0003.cpp)|[HashMap](https://www.youtube.com/watch?v=3IETreEybaA)|Medium|HashMap, Sliding Window
|2|[Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)|[Solution](./algorithms/cpp/0002/0002.cpp)||Medium|LinkList
|1|[Two Sum](https://leetcode.com/problems/two-sum/)|[Solution](./algorithms/cpp/0001/0001.cpp)|[HashMap](https://www.youtube.com/watch?v=kPXOr6pW8KM)|Easy|HashMap

## 與題目無關的加速問題(C++的輸入輸出保護)

簡單來說，C++在IO方面效率低下，是因為他內部為了兼容C而採取的保護措施<br>
而保護措施預設是開啟的，只要關掉IO的執行時間就會飛快提升，leetcode也能進一步加快執行效率<br>
以下就是關閉保護措施的程式碼:<br>

```
ios_base::sync_with_stdio(false);
cout.tie(NULL);
cin.tie(NULL);
```

**ios_base::sync_with_stdio**<br>
這個函數是一個"是否兼容stdio"的開關，C++為了兼容C，保證程式在使用了std::printf和std::cout的時候不發生混亂，將輸出流綁到了一起<br>

**tie**<br>
tie是將兩個stream綁定的函數，空參數的話則返回當前的輸出流指標<br>
在默認的情況下cin綁定的是cout，每次執行 << 操作符的時候都要調用flush<br>
這樣會增加IO負擔，可以通過tie(0)(0表示NULL)來解除cin與cout的綁定，進一步加快執行效率<br>

[詳細說明(來源)](https://www.hankcs.com/program/cpp/cin-tie-with-sync_with_stdio-acceleration-input-and-output.html)
