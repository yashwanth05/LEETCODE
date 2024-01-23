class Solution(object):
    def shuffle(self, nums, n):
        a = []
        for i in range(0,n):
            a.append(nums[i])
            a.append(nums[i+n])
        return a
        