class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        int j=1;
        int p = 0;
        // cout<<"hi";
        while(j<nums.size()){
            // cout<<p<<" "<<j<<endl;
            while(j<nums.size() && nums[p]==nums[j]){
                p=j;
                j++;
            }
            // cout<<p<<" "<<j<<endl;
            if(j<nums.size()){
                cout<<j;
                nums[i]=nums[j];
                p=j;
                j++;
                i++;
            }
            // nums[i]=nums[j];
            // p=j;
            // j++;
            // i++;
        }
        cout<<i;
        return i;
    }
};