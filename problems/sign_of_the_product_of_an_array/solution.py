class Solution(object):
    def arraySign(self, nums):
        arr = []
        for i in nums:
            if i>0:
                arr.append(1)
            elif i<0:
                arr.append(-1)
            if i==0:
                arr.append(0)
        if 0 in arr:
            return 0
        elif arr.count(-1)%2==0:
            return 1
        else: return -1