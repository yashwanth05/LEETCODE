class Solution {
public:
    void cum(vector<vector<int>>& ans, vector<int> can,vector<int> temp,int n,int target){
        if(n==can.size()){
            if(target==0) ans.push_back(temp);
            return;
        }
        if(can[n]<=target){
            temp.push_back(can[n]);
            cum(ans,can,temp,n,target-can[n]);
            temp.pop_back();
        }
        cum(ans,can,temp,n+1,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        cum(ans,candidates,{},0,target);
        return ans;
    }
};