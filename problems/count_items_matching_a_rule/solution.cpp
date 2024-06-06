class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans = 0;
        map<string,int> m;
        m["type"] = 0;
        m["color"] = 1;
        m["name"] = 2;
        for(int i=0;i<items.size();i++){
            cout<<items[i][m[ruleKey]]<<endl;
            if(items[i][m[ruleKey]]==ruleValue){
                ans++;
            }
        }
        return ans;
    }
};