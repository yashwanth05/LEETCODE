class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int prod = 1;
        int l = 0;
        int r = 0;
        int ans = 0;
        while(r<nums.size()){
            prod = prod*nums[r];
            // if(prod>=k) r--;
            while(l<=r && prod>=k){
                prod = prod/nums[l];
                l++;
            }
            if(prod<k) ans = ans + r-l+1;
            cout<<endl;
            r++;
        }
        return ans;
    }
};