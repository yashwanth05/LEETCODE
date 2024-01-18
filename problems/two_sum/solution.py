class Solution(object):
    def twoSum(self, nums, target):
        l = len(nums)
        for i in range(0,l):
            f = nums[i]
            s = target-f
            if s in nums:
                j = nums.index(s)
                if i!=j:
                    return [i,j]
        return False
        