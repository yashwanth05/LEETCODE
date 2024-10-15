class Solution {
public:

    int bs(vector<int>& nums, int target,bool left){
        int l = 0;
        int r = nums.size()-1;
        int ind = -1;
        while(l<=r){
            int m = (l+r)/2;
            if(target<nums[m]){
                r = m-1;
            }
            else if(target>nums[m]){
                l = m+1;
            }
            else{
                ind = m;
                if(left) r=m-1;
                else l = m+1;
            }
        }
        return ind;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int left = bs(nums,target,true);
        int right = bs(nums,target,false);
        result.push_back(left);
        result.push_back(right);
        return result;
    }
};