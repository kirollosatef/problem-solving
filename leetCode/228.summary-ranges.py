#
# @lc app=leetcode id=228 lang=python3
#
# [228] Summary Ranges
#

from ast import List
# @lc code=start
class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        if not nums:
            return[]
        res = []
        a = nums[0]
        for i in range(0, len(nums)):
            if i == len(nums) - 1 or nums[i] + 1 != nums[i + 1]:
                if a == nums[i]:
                    res.append(str(a))
                else:
                    res.append(str(a) + '->' + str(nums[i]))
                if i < len(nums) - 1:
                    a = nums[i + 1]
        return res
# @lc code=end
