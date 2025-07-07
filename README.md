# Leetcode 刷題筆記

| 日期 | 題目 | 類型 | 狀態 | 筆記連結 |
|------|------|------|------|-----------|
| 6/23 | Two Sum | Array | 完成 | [two_sum.md](arrays/two_sum.md) |
| 6/23 | Valid Parentheses | Stack | 完成 | [valid_parentheses.md](stack/valid_parentheses.md) |
| 6/24 | Merge Sorted Array | Two Pointer | 完成 | [valid_parentheses.md](two_pointers/merge_sorted_array.md) |
| 6/24 | Remove Duplicates from Sorted Array| Array | 完成 | [remove_duplicates.md](arrays/remove_duplicates.md) |
| 6/25 | Best Time to Buy and Sell Stock| DP | 完成 | [buy_sell_stock.md](dp/buy_sell_stock.md) |
| 6/25 | Contains Duplicate| DP | 完成 | [contains_duplicate.md](hash/contains_duplicate.md) |
| 6/27 | Valid Anagram| Hash | 完成 | [valid_anagram.md](hash/valid_anagram.md) |
| 6/27 | Min Stack| Stack | 完成 | [min_stack.md](stack/min_stack.md) |
| 6/28 | queue_using_stack| Queue | 完成 | [queue_using_stack.md](queue/queue_using_stack.md) |
| 6/28 | linked_list_cycle| link list | 完成 | [linked_list_cycle.md](linked_list/linked_list_cycle.md) |
| 6/30 | longest_unique_substring| sliding_window | 完成 | [longest_unique_substring.md](sliding_window/longest_unique_substring.md) |
| 6/30 | binary_search| binary_search | 完成 | [binary_search.md](binary_search/binary_search.md) |
| 7/4 | First Bad Version| binary_search | 完成 | [first_bad_version.md](binary_search/first_bad_version.md) |
| 7/4 | container_most_water| two pointers | 完成 | [container_most_water.md](two_pointers/container_most_water.md) |
| 7/7 | anagram_in_string| sliding windows | 完成 | [anagram_in_string.md](sliding_window/anagram_in_string.md) |
| 7/7 | permutation_in_string(基本上就是上面那一題)| sliding windows | 完成 | [anagram_in_string.md](sliding_window/anagram_in_string.md) |

---
# 📅 Leetcode 面試準備 Week 2 任務表

> 主題：Sliding Window, Binary Search, Two Pointers  
> 目標：掌握雙指標操作與二分搜尋，熟悉邊界控制與 template 模式

---

## ✅ 每日進度表

| Day | 題目連結 | 主題 | 難度 | 狀態 | 筆記連結 |
|-----|----------|------|------|------|-----------|
| Day 2 | [76. Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) | Sliding Window | Hard | ⬜ | sliding_window/min_window_substring.md |
| Day 4 | [153. Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | Binary Search | Medium | ⬜ | binary_search/find_min_in_rotated_array.md |
| Day 5 | [567. Permutation in String](https://leetcode.com/problems/permutation-in-string/) | Sliding Window | Medium | ⬜ | sliding_window/permutation_in_string.md |
| Day 5 | [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/) | Binary Search | Easy | ⬜ | binary_search/search_insert_position.md |
| Day 6 | [209. Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/) | Sliding Window | Medium | ⬜ | sliding_window/min_subarray_sum.md |
| Day 6 | [34. Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) | Binary Search | Medium | ⬜ | binary_search/find_first_last_pos.md |
| Day 7 | 複習整理日 | ✏️ 複習錯題、筆記總結、自我評估 | - | ⬜ | daily_log/2025-Week2-Review.md |


✅ Week 3：DFS / BFS 與 Recursion
題型：Graph, Recursion

加強模板、理解 call stack

📌 推薦題：

Number of Islands

Clone Graph

Flood Fill

Maximum Depth of Binary Tree

Subsets（回溯）

✅ Week 4：樹與 Backtracking 深入
題型：Binary Tree, Backtracking

多寫圖畫出流程圖輔助理解

📌 推薦題：

Binary Tree Inorder Traversal

Path Sum II

Word Search

Permutations

Combination Sum

✅ Week 5：Dynamic Programming 入門
題型：DP（1D/2D）、狀態轉移推導

每日 1 題 DP，週末複習並畫狀態表

📌 推薦題：

Climbing Stairs

House Robber

Maximum Subarray

Coin Change

Longest Increasing Subsequence

✅ Week 6：整合複習 + 行為面試草稿
把筆記中的 “不熟” 題目挑出複習

每天花 15~30 分鐘練習行為面試回答

📌 行為面試題：

Tell me about yourself

A time you solved a tough problem

A time you failed

Why Google / Microsoft

How you handled conflict with team

🧠 Bonus（Week 7~8）：選擇性進階強化
選擇性安排（依你時間與自信程度）：

Mock Interview（找朋友或我模擬都可以）

System Design 題型（如果職位是 SDE2 以上）

📌 System Design 題目舉例：

設計一個 Rate Limiter

設計 TinyURL

設計一個聊天系統（多人聊天室）

🕒 時間安排建議（平日 / 週末）
平日（約 1 小時 / 天）
✅ 刷題 1~2 題

✏️ 更新 GitHub 筆記（寫下解法、重點、反思）

週末（約 2 小時 / 天）
✅ 刷題複習弱點題

🧠 行為面試準備 / System Design 閱讀

📝 寫日誌 / 安排下週目標

---


## ✍️ 推薦每日流程

1. 用 VSCode / Leetcode 網頁刷題
2. 將題目紀錄到你的 GitHub 筆記（使用 `.md` 模板）
3. 若卡關，紀錄卡住點（ex: Hash 的邏輯搞混）
4. 每日 commit 一次，養成紀律與可追蹤性
