class Solution {
public:
    int findMin(vector<int>& nums) {
    int l = 0;
    int r = nums.size()-1;
    int m = (l+r)/2;
    while(l <= r) {
        if((nums[m] < nums[l] && nums[m] < nums[r])){
            r=m;
        }
        if ((nums[m] >= nums[l] && nums[m] >= nums[r])) {
            l = m + 1;
            cout<<"hi"<<endl;
        } else {
            r = m;
        }
        if(l>r) break;
        m = (l+r)/2;
    }
    return nums[m];
}
};