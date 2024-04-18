class Solution {
public:
    bool isIsomorphic(string s, string t) {
       int x=s.size();
        int y= t.size();
        if(x!=y) return false;
        vector<int> v(150,1000);
        for(int i=0;i<x;i++){
            int idx = (int)s[i];
            cout<<idx<<endl;
            if(v[idx]==1000)
            v[idx]=s[i]-t[i];
            else if(v[idx]!=(s[i]-t[i]))  return false;
            cout<<v[idx]<<endl;
        }
        for(int i=0;i<v.size();i++){
            v[i]=1000;
        }
        for(int i=0;i<x;i++){
            int idx = (int)t[i];
            
            if(v[idx]==1000)
            v[idx]=t[i]-s[i];
            else if(v[idx]!=(t[i]-s[i]))  return false;
            cout<<v[idx]<<endl;
        }
        return true;
    }
};