class Solution {
public:
    int fun(vector<int>& nums,int goal){
        int l = 0;
        int r = 0;
        int sum = 0;
        int ans = 0;
        while(r<nums.size()){
            sum = sum + nums[r];
            while(l<=r && sum>goal){
                sum = sum - nums[l];
                l++;
            }
            ans = ans + r-l+1;
            r++;
        }

        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return fun(nums,goal)-fun(nums,goal-1);
    }
};