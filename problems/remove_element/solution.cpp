class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int ans = 0;
       int i=0;
       int j=nums.size()-1;
       if(nums.size()==0){
        return ans;
       }
       for(int k=0;k<nums.size();k++){
        if(nums[k]!=val){
            ans++;
        }
       }
       while(i<j && j>=0){
        if(nums[i]==val){
            if(nums[i]!=nums[j]){
                int temp = nums[i];
                nums[i]=nums[j];
                nums[j] = temp;
            }
            else{
                while(j>i && nums[i]==nums[j]){
                    j--;
                }
                // j--;
                int temp = nums[i];
                nums[i]=nums[j];
                nums[j] = temp;
            }
            j--;
        }
        i++;
       }
       return ans;
    }
};