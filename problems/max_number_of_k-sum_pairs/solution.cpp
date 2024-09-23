class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int r = nums.size()-1;
        int l = 0;
        int ans = 0;
        while(l<r){
            if(nums[l]+nums[r]>k) r--;
            else if(nums[l]+nums[r]<k) l++;
            else{
                ans++;
                l++;
                r--;
            }
        }
        return ans;
    }
};