class Solution(object):
    def numIdenticalPairs(self, nums):
        num = 0
        for i in range(0,len(nums)-1):
            for j in range(i+1,len(nums)):
                if nums[i]==nums[j]:
                    num+=1
        return num

        