class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ls(nums.size(),1);
        for(int i = nums.size()-1;i>=0;i--){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<nums[j]){
                    ls[i] = max(ls[i],1+ls[j]);
                }
            }
        }
        auto pt = max_element(ls.begin(),ls.end());
        int ans = *pt;
        return ans;
    }
};