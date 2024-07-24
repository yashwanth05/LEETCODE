class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> v1;
        vector<int> v2;
        string temp = "";
        for(int i=0;i<version1.size();i++){
            if(version1[i]=='.'){
                int n = stoi(temp);
                v1.push_back(n);
                temp = "";
            }
            else{
                temp = temp+version1[i];
            }
        }
        int n = stoi(temp);
        v1.push_back(n);
        temp = "";
        for(int i=0;i<version2.size();i++){
            if(version2[i]=='.'){
                int n = stoi(temp);
                v2.push_back(n);
                temp = "";
            }
            else{
                temp = temp+version2[i];
            }
        }
        n = stoi(temp);
        v2.push_back(n);
        temp = "";
        int m = (v1.size() > v2.size()) ? v1.size() : v2.size();
        for(int i=0;i<m;i++){
            // cout<<v1[i]<<" "<<v2[i]<<endl;
            if(i<v1.size()&&i<v2.size()){
                if(v1[i]>v2[i]) return 1;
                else if(v1[i]<v2[i]) return -1;
            }
            if(i<v1.size()&&i>=v2.size()){
                if(v1[i]>0) return 1;
                else if(v1[i]<0) return -1;
            }
            if(i>=v1.size()&&i<v2.size()){
                if(v2[i]>0) return -1;
                else if(v2[i]<0) return 1;
            }
        }
        return 0;
    }
};