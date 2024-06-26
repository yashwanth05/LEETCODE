class Solution {
public:
    int countGoodSubstrings(string s) {
        set<char> st;
        int l=0;
        int ans = 0;
        for(int r=2;r<s.size();r++){
            for(int i=l;i<=r;i++){
                st.insert(s[i]);
            }
            cout<<st.size()<<endl;
            if(st.size()==3){
                ans++;
            }
            st.clear();
            cout<<st.size()<<endl;
            l++;
        }
        return ans;
    }
};