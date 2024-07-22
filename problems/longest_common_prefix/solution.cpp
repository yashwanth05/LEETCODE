class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans = "";
        string main = strs[0];
        for(int i=0;i<main.size();i++){
            for(auto str:strs){
                if(str[i]!=main[i]){
                    return ans;
                }
            }
            ans = ans+main[i];
        }
        return ans;
    }
};