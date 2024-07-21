class Solution {
public:
    int maximum69Number (int num) {
        int ans = num;
        string n = to_string(num);
        for(int i=0;i<n.size();i++){
            string temp = n;
            if(temp[i]=='6'){
                temp[i]='9';
            }
            else{
                temp[i]='6';
            }
            // n[i];
            int tem = stoi(temp);
            cout<<tem<<endl;
            ans = max(ans,tem);
        }
        return ans;
    }
};