class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int i=0;
        while(i<s2.size()){
            string st = s2.substr(i,s1.size());
            sort(st.begin(),st.end());
            if(s1==st){
                return true;
            }
            i++;
        }
        return false;
    }
};
