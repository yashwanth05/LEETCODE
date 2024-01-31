class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        int prev = -1;
        int m=INT_MAX;
        std::sort(arr.begin(), arr.end());
        for(int i=0;i<arr.size();i++){
            int temp;
            if(prev==-1){prev = i;}
            else{
                temp = arr[i]-arr[prev];
                m = min(m,temp);
            }
            prev = i;
        }
        prev = -1;
        for(int i=0;i<arr.size();i++){
            vector<int> t;
            if(prev==-1){prev = i;}
            else{
                if((arr[i]-arr[prev])==m){
                    t.push_back(arr[prev]);
                    t.push_back(arr[i]);
                    ans.push_back(t);
                }
            }
            prev = i; 
        }
        return ans;
    }
    
};