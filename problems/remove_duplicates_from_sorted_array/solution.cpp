class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = -1;
        int ans = 1;
        for(int i=0;i<nums.size();i++){
            if(prev == -1){prev = i;}
            else{
                if(nums[i]!=nums[prev]){
                    nums[ans] = nums[i];
                    ans++;
                }
            }
            prev = i;
        }
        cout<<ans<<endl;
        return ans;
    }
};