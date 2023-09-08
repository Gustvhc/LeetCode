'''
1. Two Sum - Easy

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:
2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 
Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
'''

#BruteForce
class Solution(object):
    def twoSum(self, nums: list[int], target: int):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if nums[i]+nums[j] == target: return {i,j}

#Dict
class Solution(object):
    def twoSum(self, nums: list[int], target: int)->list[int]:
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        HashMap = {}
        for i in range(len(nums)):
            if (target-nums[i]) in HashMap:
                return [HashMap[target-nums[i]],i]
            HashMap[nums[i]]=i
        return[]