# Arrays
This folder contains array problems from LeetCode with explanations and solutions in C++.

## 1. Two Sum
- **Problem Link**: [LeetCode 1](https://leetcode.com/problems/two-sum/)
- **Category**: Arrays
- **Difficulty**: Easy
- **Tags**: Array, Hash Map

### Problem Statement
Given an array of integers `nums` and an integer `target`,  
return the indices of the two numbers such that they add up to `target`.  

Constraints:
- Exactly one solution exists.
- You may not use the same element twice.

### Approach
- Use a **hash map** to store each number’s index.
- For every `nums[i]`, check if `(target - nums[i])` exists in the map.
- If found, return both indices.
- **Time Complexity**: O(n)  
- **Space Complexity**: O(n)  

### Example
Input:  
`nums = [2, 7, 11, 15], target = 9`  
Output:  
`[0, 1]`  

Explanation: nums[0] + nums[1] = 2 + 7 = 9.

## 2. Best Time to Buy and Sell Stock

- **Problem Link**: [LeetCode #121](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
- **Category**: Arrays
- **Difficulty**: Easy
- **Tags**: Array, Dynamic Programming

### Problem Statement
You are given an array `prices` where `prices[i]` is the price of a stock on the i-th day.  
You want to maximize your profit by choosing one day to buy and one day to sell.  
Return the maximum profit you can achieve. If no profit is possible, return 0.

### Approach
- Track the **minimum price** so far.
- For each price, calculate `profit = price - minPrice`.
- Keep updating `maxProfit`.
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)

### Example
Input:  
`prices = [7, 1, 5, 3, 6, 4]`  
Output:  
`5`  

Explanation: Buy on day 2 (price=1) and sell on day 5 (price=6).  
Profit = 6 - 1 = 5.
