class Solution {
public:
    int divisorSum(vector<int>& nums, int mid){
        int d = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]<=mid){
                d = d+1;
            }
            else{
                if(nums[i]%mid==0){
                    d = d+(nums[i]/mid);
                }
                else{
                    int x = nums[i]+(mid-(nums[i]%mid));
                    d = d+(x/mid);
                }
            }
        }
        return d;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end());
        int l = 1;
        int r = nums[nums.size()-1];
        int mid = (l+r)/2;
        int ans = INT_MAX;
        while(l<=r){
           int ds = divisorSum(nums,mid);
            if(ds<=threshold){
                ans = min(ans,mid);
                r = mid-1;
            }
            else{
                l=mid+1;
            }
            mid = (l+r)/2;
        }
        return ans;
    }
};