class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        for(int i=0;i<len;i++){
            if(nums[i] == 0) nums.push_back(nums[i]);
        }
        for(int i=0;i<len;i++){
            if(nums[i] == 1) nums.push_back(nums[i]);
        }
        for(int i=0;i<len;i++){
            if(nums[i] == 2) nums.push_back(nums[i]);
        }
        for(int i=0;i<len;i++){
            nums.erase(nums.begin());
        }
    }
};