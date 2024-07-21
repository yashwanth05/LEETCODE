class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int ans = 0;
        auto mait = max_element(nums.begin(),nums.end());
        int ma = *mait;
        for(int i=0;i<k;i++){
            ans = ans + ma;
            ma++;
        }
        return ans;
    }
};