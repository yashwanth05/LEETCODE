class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;
        int L = 0 ;
        for(int i=0;i<nums.size();i++){
            if((i-L)>k){
                s.erase(nums[i-k-1]);
            }
            if(s.find(nums[i])!=s.end()){
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
    }
};