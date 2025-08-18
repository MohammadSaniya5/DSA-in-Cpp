# Arrays
This folder contains array problems from LeetCode with explanations and solutions in C++.

## 1. Two Sum
- **Problem Link**: [LeetCode #1](https://leetcode.com/problems/two-sum/)
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
 - [Solution](two_sum.cpp)
   
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
 - [Solution](BestTimeToBuySellStock.cpp)
   
## 3. Maximum Subarray

- **Problem Link**: [LeetCode #53](https://leetcode.com/problems/maximum-subarray/)
- **Category**: Arrays
- **Difficulty**: Medium
- **Tags**: Array, Dynamic Programming

### Problem Statement
Given an integer array `nums`, find the contiguous subarray (containing at least one number) which has the largest sum, and return its sum.

### Approach (Kadane’s Algorithm)
- Initialize `currentSum = nums[0]` and `maxSum = nums[0]`.
- For each element:
  - `currentSum = max(nums[i], currentSum + nums[i])`
  - `maxSum = max(maxSum, currentSum)`
- Return `maxSum`.

### Complexity
- Time Complexity: O(n)
- Space Complexity: O(1)

### Example
Input:  
`nums = [-2,1,-3,4,-1,2,1,-5,4]`  
Output:  
`6`  

Explanation: The subarray `[4,-1,2,1]` has the largest sum = 6.
 - [Solution]( MaximumSubarray.cpp)

## 4. Maximum Product Subarray

- **Problem Link**: [LeetCode #152](https://leetcode.com/problems/maximum-product-subarray/)
- **Category**: Arrays
- **Difficulty**: Medium
- **Tags**: Array, Dynamic Programming

### Problem Statement
Find the contiguous subarray within an array that has the largest product.

### Approach
- Maintain both maximum product and minimum product at each index.
- If current number is negative, swap max and min.
- Update the result with the maximum found so far.

### Complexity
- Time Complexity: O(n)
- Space Complexity: O(1)

### Example
Input:  
`nums = [2,3,-2,4]`  
Output:  
`6`  

Explanation: The subarray `[2,3]` has the largest product = 6.
 - [Solution]( maximum_product_Subarray.cpp)

## 5. Merge Intervals

- **Problem Link**: [LeetCode #56](https://leetcode.com/problems/merge-intervals/)
- **Category**: Arrays
- **Difficulty**: Medium
- **Tags**: Array, Sorting

### Problem Statement
Given an array of intervals, merge all overlapping intervals.

### Approach
1. Sort intervals by start time.
2. Traverse intervals:
   - If current interval overlaps with the last interval in result → merge them.
   - Else → add as new interval.
3. Return the merged intervals.

### Complexity
- Time Complexity: O(n log n) (sorting)
- Space Complexity: O(n)

### Example
Input:  
`intervals = [[1,3],[2,6],[8,10],[15,18]]`  
Output:  
`[[1,6],[8,10],[15,18]]`
- [Solution](Merge_intervals.cpp)

## 6. Rotate Image

- **Problem Link**: [LeetCode #48](https://leetcode.com/problems/rotate-image/)
- **Category**: Arrays (Matrix)
- **Difficulty**: Medium
- **Tags**: Array, Matrix

### Problem Statement
Rotate an `n x n` 2D matrix 90 degrees clockwise in place.

### Approach
1. **Transpose** the matrix: swap matrix[i][j] with matrix[j][i].
2. **Reverse each row**.
3. Done in-place.

### Complexity
- Time Complexity: O(n^2)
- Space Complexity: O(1)

### Example
Input:  
[
[1,2,3],
[4,5,6],
[7,8,9]
]
Output:  
[
[7,4,1],
[8,5,2],
[9,6,3]
]
- [Solution](Rotate_image.cpp)

## 7. Search in Rotated Sorted Array

- **Problem Link**: [LeetCode #33](https://leetcode.com/problems/search-in-rotated-sorted-array/)
- **Category**: Arrays / Binary Search
- **Difficulty**: Medium
- **Tags**: Array, Binary Search

### Problem Statement
Given a rotated sorted array and a target, return its index if found, else -1.

### Approach
- Use binary search.
- At each step, one half of the array is sorted.
- Decide if target lies in the sorted half or the other half.
- Continue until found.

### Complexity
- Time Complexity: O(log n)
- Space Complexity: O(1)

### Example
Input:  
`nums = [4,5,6,7,0,1,2], target = 0`  
Output:  
`4`
- [Solution](Searchin_rotated_sorted_array.cpp)

## . Majority Element

- **Problem Link**: [LeetCode #169](https://leetcode.com/problems/majority-element/)
- **Category**: Arrays
- **Difficulty**: Easy
- **Tags**: Array, Boyer–Moore

### Problem
Return the element that appears more than ⌊n/2⌋ times (guaranteed to exist).

### Approach (Boyer–Moore)
- Keep a `candidate` and `count`.
- If `count == 0`, set `candidate = nums[i]`.
- If `nums[i] == candidate`, `count++`, else `count--`.
- Final `candidate` is the majority.

### Complexity
- Time: O(n)
- Space: O(1)

### Example
Input: `nums = [2,2,1,1,1,2,2]`  
Output: `2`
- [Solution]( MajorityElement.cpp)
