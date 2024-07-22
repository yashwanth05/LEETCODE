class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;
        if(nums.size()==1){
            return nums[0];
        }
        while(s<=e){
            int m = (s+e)/2;
            if(m==0 || m==nums.size()-1){
                if(m==0){
                    if(nums[0]!=nums[1]) return nums[0];
                }
                if(m==nums.size()-1){
                    if(nums[nums.size()-1]!=nums[nums.size()-2]) return nums[nums.size()-1];
                }
            }
            if(nums[m-1]!=nums[m] && nums[m+1]!=nums[m]) return nums[m];
            if(m%2==1){
                if(nums[m-1]==nums[m]){
                    s=m+1;
                }
                else if(nums[m+1]==nums[m]){
                    e=m-1;
                }
            }
            else if(m%2==0){
                if(nums[m-1]==nums[m]){
                    e=m-1;
                }
                else if(nums[m+1]==nums[m]){
                    s=m+1;
                }
            }
        }
        return 0;
    }
};