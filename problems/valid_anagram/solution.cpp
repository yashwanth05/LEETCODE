class Solution {
public:
    bool isAnagram(string s, string t) {
        int sn[26];
        fill(begin(sn),end(sn),0);
        int tn[26];
        fill(begin(tn),end(tn),0);
        for(int i=0;i<s.size();i++){
            int position = s[i] - 'a' ;
            sn[position]++;
        }
        for(int i=0;i<t.size();i++){
            int position = t[i] - 'a' ;
            tn[position]++;
        }
        // cout<<sn[18];
        for(int i=0;i<26;i++){
            cout<<sn[i]<<" "<<tn[i]<<endl;
            if(tn[i]!=sn[i]){return false;}
            // if(tn[i]==0 && sn[i]>0 ){
            //     cout<<sn[i]<<" "<<tn[i]<<endl;
            //     return false;
            // }
        }
        return true;
    }
};