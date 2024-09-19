class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0;
        int r = nums.size()-1;
        vector<int> ans(nums.size(),1e9);
        int i = nums.size()-1;
        while(l<=r){
            if(abs(nums[l])<abs(nums[r])){
                ans[i] = nums[r]*nums[r];
                r--;
            }
            else{
                ans[i] = nums[l]*nums[l];
                l++;
            }
            i--;
        }
        return ans;
    }
};