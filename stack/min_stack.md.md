# 155. Min Stack

## 題目連結
https://leetcode.com/problems/min-stack/description/
## 題型分類
stack

## 關鍵技巧與邏輯
維護兩個stack
第一個stack就是一個正常stack, 可以處理push. pop. top
第二個stack是用來記錄最小值
由於stack 是 last in first out, 所以我們只需要紀錄最晚出現的最小值 因為如果晚出現的值被pop走, 那最小值一定在左手邊
所以我們等於只要維護一個 non-increasing 的stack


## 時間複雜度 / 空間複雜度
O(1) / O(N)
## 自我評估
❗️需再複習

