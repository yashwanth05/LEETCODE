class Solution {
public:
    int maxVowels(string s, int k) {
        int l=0;
        int count = 0;
        int ans = 0;
        set<char>st = {'a', 'e', 'i', 'o','u'};
        for(int r=0;r<s.size();r++){
            if(st.find(s[r])!=st.end()) count++;
            if(r-l == k){
                if(st.find(s[l])!=st.end()){
                    count--;
                }
                l++;
            }
            ans = max(ans,count);
        }
        return ans;
    }
};