class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans = 0;
        int numchar[3] = {-1,-1,-1};
        for(int i=0;i<s.size();i++){
            numchar[s[i]-'a'] = i;
            if(numchar[0] != -1 && numchar[1] != -1 && numchar[2] != -1){
                ans = ans + 1+min(numchar[0],min(numchar[1],numchar[2]));
            }
        }
        return ans;
    }
};