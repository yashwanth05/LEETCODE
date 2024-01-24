class Solution(object):
    def maxAscendingSum(self, nums):
        # ans = 0
        # arr = []
        # f = nums[0]
        # arr.append(f)
        # for i in range(1,len(nums)):
        #     if f<nums[i]:
        #         if ans == 0:
        #             ans = f+nums[i]
        #         else: 
        #             ans = ans+nums[i]
        #     else: 
        #         # print(ans)
        #         arr.append(nums[i])
        #         arr.append(ans)
        #         ans = 0
        #     if i==len(nums)-1:
        #         arr.append(ans)
        #     f = nums[i]
        # arr = sorted(arr)
        # print((arr))
        # return max(arr)
        prev = -1
        ans = -1
        temp = -1

        for i in range(0, len(nums)):
            if prev == -1 or nums[i] <= prev:
                ans = max(temp, ans)
                temp = nums[i]
            else:
                temp += nums[i]
            prev = nums[i]
        ans = max(temp, ans)
        return ans
