class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int r = 0;
        int l = 0;
        int zeroes = 0;
        int count = 0;
        while(r<nums.size()){
            if(nums[r]==0) zeroes++;
            while(l<=r && zeroes>1){
                if(nums[l] == 0) zeroes--;
                l++;
            }
            count = max(count,r-l);
            r++;
        }
        return count;
    }
};