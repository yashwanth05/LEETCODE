class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l = 0;
        int r = 0;
        int ans = 0;
        while(r<nums.size()){
            if(nums[r]==1){
                r++;
            }
            else{
                r++;
                l=r;
            }
            ans = max(ans,r-l);
        }
        return ans;
    }
};