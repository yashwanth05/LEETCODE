class Solution {
public:
    void cum(vector<vector<int>>& ans,vector<int> can,vector<int> temp,int target,int ind){
        if(ind == can.size()){
            if(target == 0) ans.push_back(temp);
            return;
        }
        if(can[ind] <= target){
            temp.push_back(can[ind]);
            cum(ans,can,temp,target-can[ind],ind+1);
            temp.pop_back();
        }
        while (ind + 1 < can.size() && can[ind] == can[ind + 1]) ind++;
        cum(ans,can,temp,target,ind+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        cum(ans,candidates,{},target,0);
        return ans;
    }
};