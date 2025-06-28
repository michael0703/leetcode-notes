# 141. Linked List Cycle

## 題目連結
https://leetcode.com/problems/linked-list-cycle/description/
## 題型分類
linked list

## 關鍵技巧與邏輯
用快慢指針, 快指針一次跑兩格 慢指針一次一格
如果有cycle, 快指針會追上慢指針, 如果沒有 他們就會到nullptr

## 時間複雜度 / 空間複雜度
O(n)/O(1)

## 自我評估
✅ 熟練

