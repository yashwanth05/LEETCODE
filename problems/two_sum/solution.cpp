class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mymap;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int complement = target - nums[i];
            if(mymap.find(complement)!=mymap.end()){
                return{mymap[complement],i};
            }
            mymap[nums[i]] = i;
        }
        return {};
    }
};