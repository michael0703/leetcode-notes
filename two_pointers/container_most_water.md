# 11. Container With Most Water

## 題目連結
https://leetcode.com/problems/container-with-most-water/description/
## 題型分類
two pointers

## 關鍵技巧與邏輯
有一點greedy的成分在, 從左右兩邊開始逼近, 答案一定包含於左右移動的過程
問題是該怎麼移動? 由於 面積是 min(兩邊)*兩邊之差, 由於兩邊之差固定的情況下, 兩邊min越高的話越好
所以應該就是移動比較小的


## 時間複雜度 / 空間複雜度
O(N)
## 自我評估
✅ 熟練

