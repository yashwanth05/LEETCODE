class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> str1(26,0);
        vector<int> str2(26,0);
        if(word1.size()!=word2.size()){
            return false;
        }
        for(int i=0;i<word1.size();i++){
            str1[word1[i]-'a']++;
            str2[word2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if((str1[i]==0 && str2[i]!=0 )|| (str1[i]!=0 && str2[i]==0) ) return false;
        }
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        return str1==str2;
    }
};