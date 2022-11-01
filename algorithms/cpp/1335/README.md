# 1335. Minimum Difficulty of a Job Schedule

[Problem Link](https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule/)

## Solution

* 這題會使用到2D-DP來解題(當然還是有鬼一般的高手用1D實現甚至使用Stack來解，但就變成會很難理解，真的想看連結在這裡-><br>[[Java/C++/Python3] DP, O(nd)Solution](https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule/discuss/490316/JavaC%2B%2BPython3-DP-O(nd)-Solution)

* 題目是要問，有n個工作必須要分成k天做
  - 每天都必須要有工作做
  - 工作必須按照順序做
  - 當天工作數量大於一件時，以難度最難的工作代表該天的工作難度
  - 試問每一天難度加總後，最小值為何?

* DP類的問題很難用文字表述，如果無法理解請看大神HuaHua的講解->[Youtube](https://www.youtube.com/watch?v=eRBpfoWujQM)
* 這裡DP的結構設定成DP[n][d]，表示d天完成n個工作的最小難度
* 必須要把問題分解成(k-1 days) + (1 days)去做思考，以這個概念慢慢把DP堆積起來
* (k-1 days)是過去已完成的結果(就是DP-array)，而(1 days)就是你需要決策的項目

## P.S.

* 為什麼我不選擇保留Stack的解法在Git上呢?明明是O(n*d)的解法，因為我猜以後回來我百分之百看不懂，並且我也很難把這類概念應用到其他地方上，反而DP比較能系統化的得到解法，能更靈活的運用
* 以後回頭重做我一定無法想起怎麼用stack解，但DP倒是很有可能覆現
* 懶人包就是，要有自知之明不要好高鶩遠(X

算法效率: O(n\*n\*d)<br>
