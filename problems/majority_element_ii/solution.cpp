class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int prev = 0;
        int i=1;
        if(nums.size()==1){
            return {nums[0]};
        }
        while(prev<nums.size()){
            int m=1;
            while(i<nums.size() && nums[i]==nums[prev]){
                prev = i;
                i++;
                m++;
            }
            cout<<m;
            if(m>(nums.size()/3)){
                // cout<<nums.size()/2;
                // ans = max(ans,m);
                ans.push_back(nums[prev]);
            }
            prev = i;
            i++;
        }
        return ans;
    }
};