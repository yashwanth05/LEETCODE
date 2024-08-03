class Solution {
public:
    void fun(vector<string>& ans,string temp,vector<char> s,int n){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<s.size();i++){
            if(temp.size()!=0 && temp[temp.size()-1]=='0' && s[i] == '0'){
                continue;
            }
            temp = temp+s[i];
            fun(ans,temp,s,n);
            temp.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        vector<char> s = {'1','0'};
        fun(ans,"",s,n);
        return ans;
    }
};