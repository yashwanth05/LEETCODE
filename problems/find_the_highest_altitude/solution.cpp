class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0;
        int count = 0;
        for(auto it:gain){
            count = count+it;
            ans = max(ans,count);
        }
        return ans;
    }
};