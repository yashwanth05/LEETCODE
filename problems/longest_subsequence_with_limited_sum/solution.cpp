class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int n = 0;
            int sum = 0;
            while(sum<queries[i] && n < nums.size()){
                sum=sum+nums[n];
                n++;
                // sum=sum+nums[n];
            }
            if(sum<=queries[i]){
                ans.push_back(n);
            }
            else if(sum>queries[i]){
                ans.push_back(n-1);
            }
        }
        return ans;
    }
};