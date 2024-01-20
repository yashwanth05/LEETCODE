class Solution(object):
    def buildArray(self, nums):
        num  = []
        for i in range(0,len(nums)):
            num.append(nums[nums[i]])
        return num