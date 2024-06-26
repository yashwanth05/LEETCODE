class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.size()<2) return "";
        unordered_set<char> st;
        for(auto ch:s){
            st.insert(ch);
        }
        for(int i=0;i<s.size();i++){
            if(st.count(tolower(s[i]))==true && st.count(toupper(s[i]))==true) continue;
            string s1 = longestNiceSubstring(s.substr(0,i));
            string s2 = longestNiceSubstring(s.substr(i+1));
            return s1.size()>=s2.size()? s1:s2;
        }
        return s;
    }
};