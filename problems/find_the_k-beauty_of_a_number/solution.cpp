class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int ans = 0;
        for(int i=0;(i+k-1)<s.size();i++){
            string temp = s.substr(i,k);
            cout<<s<<endl;
            int t = stoi(temp);
            if(t==0)continue;
            if(num%t == 0){ans++;}
            // cout<<t<<endl;
        }
        return ans;
    }
};