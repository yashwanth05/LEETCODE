class Solution {
public:
    int myAtoi(string s) {
        int space = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                space++;
            }
            else break;
        }
        s.erase(0,space);
        int sign = 1;
        if(s[0]=='-' || s[0]=='+'){
            sign = (s[0] == '-') ? -1 : 1;
            s.erase(0,1);
        }
        int zero = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                zero++;
            }
            else break;
        }
        s.erase(0,zero);
        vector<char> num = {'0','1','2','3','4','5','6','7','8','9'};
        int t = 10;
        int ans = 0;
        cout<<s<<endl;
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<endl;
            if(find(num.begin(), num.end(), s[i])!=num.end()){
                int x = s[i] - '0';
                if(ans > (INT_MAX - x) / 10) {
                    return (sign == 1) ? INT_MAX : INT_MIN;
                }
                
                ans = ans * 10 + x;
                // t = t*10;
            }
            else break;
            cout<<ans<<" "<<t<<endl;
        }
        return ans*sign;
    }
};