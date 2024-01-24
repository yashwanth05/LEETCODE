class Solution(object):
    def minOperations(self, nums):
        prev = -1
        ans = 0
        for i in range(0,len(nums)):
            if prev == -1 :
                prev = nums[i]
            else:
                if prev>nums[i]:
                    temp = prev-nums[i]+1
                    ans+=temp
                    nums[i] = prev+1
                elif prev == nums[i]:
                    ans = ans+1
                    nums[i] = prev+1
                prev = nums[i]
        return ans
        