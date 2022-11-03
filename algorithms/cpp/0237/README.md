# 237. Delete Node in a Linked List

[Problem Link](https://leetcode.com/problems/delete-node-in-a-linked-list/)

## Solution

* 這題很簡單，就是他給你中間的一個節點，要你刪除他，且該節點不會是頭或尾
* 因為修改不到上一個節點的next，所以刪除的動作會變成複製下一個節點的value，並修改當前節點的next指向next->next，然後刪除下一個節點
* 動作很簡單，就一般的刪除節點，那為什麼難度是Medium呢?就是他題目敘述有夠繁複的= =，一整個長到爆表，然後要你做的只是這點是，相信認真看完就一定會是一整個火大
* 但題目本意是好的，有一定程度學習意義，所以才沒被DonwVote灌爆吧

算法效率: O(1)<br>
