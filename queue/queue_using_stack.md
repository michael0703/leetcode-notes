# 232. Implement Queue using Stacks

## 題目連結
https://leetcode.com/problems/implement-queue-using-stacks/description/
## 題型分類
stack

## 關鍵技巧與邏輯
用兩個stack
push的時候正常push到一個stack
如果要Pop的時候 先把一個stack都push到另一個stack
然後再pop


## 時間複雜度 / 空間複雜度
時間複雜度: amortizee = O(1)
🧠 關鍵觀念：每個元素只被「搬一次」！
你的操作如下（n=3）：

第一輪：
push(1), push(2), push(3) → 元素進入 st1

pop() ×3 → 觸發把 st1 → st2，3 個元素「被搬一次」，然後一個個彈出
pop() 第一次花了 3 step(N)
後面每次pop都 只需要 O(1)
平均下來就是 O(1)


第二輪：
push(4), push(5), push(6) → 元素進入 st1

pop() ×3 → 再次把 st1 → st2，新元素又被「搬一次」



## 自我評估
❗️需再複習

