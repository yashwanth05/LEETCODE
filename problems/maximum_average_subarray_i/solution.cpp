class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0.0;
        double ans = INT_MIN;
        int i=0;
        int j=0;
        while(j<nums.size()){
            sum = sum + nums[j];
            if((j-i+1)==k){
                ans =max(ans,(sum/k));
                sum = sum - nums[i++];
            }
            j++;
        }
        return ans;
    }
};