class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        int prev = 0;
        int i=1;
        if(nums.size()==1){
            return nums[0];
        }
        while(i<nums.size()){
            int m=1;
            while(i<nums.size() && nums[i]==nums[prev]){
                prev = i;
                i++;
                m++;
            }
            cout<<nums.size()/2;
            if(m>(nums.size()/2)){
                // cout<<nums.size()/2;
                // ans = max(ans,m);
                ans = nums[prev];
            }
            prev = i;
            i++;
        }
        return ans;
    }
};