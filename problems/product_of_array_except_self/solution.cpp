class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre[nums.size()];
        int post[nums.size()];
        vector<int> ans;
        pre[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            pre[i] = nums[i]*pre[i-1];
        }
        for(int i=0;i<nums.size();i++){
            cout<<pre[i]<<endl;
        }
        post[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            post[i] = nums[i]*post[i+1];
        }
        for (int i = 0; i < nums.size(); i++) {
            int prefix = (i > 0) ? pre[i - 1] : 1;  // Avoid accessing -1 index
            int postfix = (i < nums.size() - 1) ? post[i + 1] : 1; // Avoid accessing out-of-bounds index
            ans.push_back(prefix * postfix);
        }
        for(int i=0;i<nums.size();i++){
            cout<<pre[i]<<endl;
        }
        return ans;
    }
};