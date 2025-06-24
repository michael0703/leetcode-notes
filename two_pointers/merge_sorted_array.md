# 88. Merge Sorted Array

## 題目連結
https://leetcode.com/problems/merge-sorted-array/description/

## 題型分類
Array, Two Pointers

## 解法一：簡單暴力
把 arr2 的所有元素塞到 arr1 後面, 然後 sort arr1
空間複雜度 O(m+n)
時間複雜度 O((m+n)log(m+n))

## 解法二：最佳解
反向思考, 從 arr1 和 arr2 的 最後一個元素比較起
比較大的 就放到 arr1 的最後
因為 arr1 的長度是 (m+n), 所以即使arr2 都比arr1 大, 也不會重疊

## 時間複雜度 / 空間複雜度
比較大的問題是如果 arr1 長度為0, 要注意迴圈的終止條件
arr2 長度為0 則完全不用做事, 沒問題

## 自我評估
❗️需再複習

