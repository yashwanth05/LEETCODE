class Solution {
public:
    int characterReplacement(string s, int k) {
        int alpha[26] = {0};
        int ans = 0;
        // cout<<'B'-'0'-17;
        int l=0;
        for(int r=0;r<s.size();r++){
            int temp = s[r] - '0' - 17;
            alpha[temp]++;
            int* m = max_element(alpha,alpha+26);
            if((r-l+1-*m)<=k){
                ans = max(ans,r-l+1);
            }
            else{
                alpha[s[l]-'0'-17]--;
                l++;
            }
            cout<<ans<<" "<<temp<<" "<<l<<endl;
        }
        return ans;
    }
};
