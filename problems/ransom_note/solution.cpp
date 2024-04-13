class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> r;
        map<char, int> m;
        for(char c : magazine){
            r[c]++;
        }
        for(char c : ransomNote){
            m[c]++;
            // cout<<m[c]<<" "<<r[c]<<endl;
            if(m[c]>r[c]){
                return false;
            }
            // m[c]++;
        }
        return true;
    }
};