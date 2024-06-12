class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mymap;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++){
            string tmp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mymap[strs[i]].push_back(tmp);
        }
        for(auto i=mymap.begin();i!=mymap.end();i++){
            ans.push_back(i->second);
        }
        return ans;
    }
};
