# week02-3.py 寫 LeetCode
# LeetCode 1. Two Sum
# 有一堆數字 nums 裡面哪兩個相加,是 target
# nums[i] + nums[j] == target 找到 i 和 j 使得加起來是 target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {} # 有一個箱子, 裡面放出現過的數字
        # 我們想要淡出 target 這個加總

        for i, num in enumerate(nums):
            other = target - num # 另外一個需要的數 可以湊出 target 的(target-num)
            if other in box: #在箱子裡, 有另外一個需要的數
                return [ box[other], i ] # 找到答案
            else: #如果沒有合適的數字能湊
                box[num] = i # 就把現在的數字num, 放到 box 裡面
