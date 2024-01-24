class Solution(object):
    def getMinDistance(self, nums, target, start):
        ans = 100000
        for i in range(0,len(nums)):
            if nums[i] == target:
                ans = min(ans, abs(i-start))
        return ans