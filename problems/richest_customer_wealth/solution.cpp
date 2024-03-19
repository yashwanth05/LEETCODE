class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;;
        int temp;
        for(int i=0;i<accounts.size();i++){
            temp = 0;
            for(int j=0;j<accounts[i].size();j++){
                temp = temp+accounts[i][j];
            }
            ans = max(temp,ans);
        }
        return ans;
    }
};