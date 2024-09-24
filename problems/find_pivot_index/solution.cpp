class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l = 0;
        int r = 0;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(i==0){
                r = sum-l-nums[i];
                if(r==l) return i;
            }
            else{
                l = l+nums[i-1];
                r = sum-l-nums[i];
                if(r==l) return i;
            }
            cout<<l<<" "<<r<<" "<<nums[i]<<endl;
        }
        return -1;
    }
};