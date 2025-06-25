# 121. Best Time to Buy and Sell Stock

## 題目連結
https://tw.piliapp.com/timer/countdown/
## 題型分類
ex: Array, DP

## 解法一：簡單暴力
使用一個 arr , arr[i] 代表 prices[i]以前最小的數字
最佳解可以跑過一次arr, 比較 prices[i] 和 arr[i-1]
空間 O(N)

## 解法二：最佳解（如 Hash Map）
使用一個變數, 紀錄目前為止最小的數字
跑過一次arr, 比較 prices[i] 和 這個數字
空間 O(1)

## 關鍵技巧與邏輯

## 時間複雜度 / 空間複雜度
O(N) / O(1)
## 自我評估
❗️需再複習

