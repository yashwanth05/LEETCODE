class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> mp;
        int r = 0;
        int l = 0;
        int ans = 0;
        while(r<fruits.size()){
            mp[fruits[r]]++;
            // cout<<l<<" "<<r<<endl;
            while(l<=r && mp.size()>2){
                cout<<mp.size()<<" "<<fruits[l]<<endl;
                mp[fruits[l]]--;
                if(mp[fruits[l]] == 0) mp.erase(fruits[l]);
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
            
        }
        return ans;
    }
};