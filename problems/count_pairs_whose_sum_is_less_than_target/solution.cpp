class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        int low = 0;
        int high = nums.size()-1;
        while(low<high){
            if((nums[low]+nums[high])<target){
                ans = ans+high-low;
                low++;
            }
            else if((nums[low]+nums[high])>=target){
                high--;
            }
        }
        return ans;
    }
        
};
    
