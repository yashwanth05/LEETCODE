class Solution {
public:
    void fun(vector<vector<int>>& ans, map<int,int>& mp, vector<int>& temp, vector<int>& nums){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i]) == mp.end()){
                mp[nums[i]] = 1;
                temp.push_back(nums[i]);
                fun(ans,mp,temp,nums);
                mp.erase(nums[i]);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        map<int,int> mp;
        vector<int> temp;
        fun(ans,mp,temp,nums);
        return ans;
    }
};