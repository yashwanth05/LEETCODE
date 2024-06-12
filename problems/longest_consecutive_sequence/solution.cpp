class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = INT_MIN;
        int tmp = 0;
        if(nums.size()==0){
            return 0;
        }
        for(int i=1;i<nums.size();i++){
            cout<<nums[i]<<" "<<tmp<<" "<<ans<<endl;
            if((nums[i]-nums[i-1])==1){
                tmp++;
            }
            else if((nums[i]-nums[i-1])!=0 && (nums[i]-nums[i-1])>1){
                ans = max(ans,tmp);
                tmp = 0;
            }
        }
        ans = max(ans,tmp);
        return ans+1;

    }
};