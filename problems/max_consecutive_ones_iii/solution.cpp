class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int r = 0;
        int l = 0;
        int ans = 0;
        int zeroes = 0;
        while(r<nums.size()){
            cout<<nums[r]<<" "<<zeroes<<endl;
            if(nums[r] == 0) zeroes++;
            while(l<=r && zeroes>k){
                if(nums[l] == 0) zeroes--;
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};