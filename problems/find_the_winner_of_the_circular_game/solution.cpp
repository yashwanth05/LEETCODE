class Solution {
public:
    int cum(vector<int>& nums,int k,int cur){
        if(nums.size()==1){
            return nums[0];
        }
        int i = (cur + k - 1) % nums.size();
        nums.erase(nums.begin()+i);
        cur = i;
        int ans = cum(nums,k,cur);
        return ans;
    }
    int findTheWinner(int n, int k) {
        vector<int> array;
        for (int i = 0; i < n; i++) {
            array.push_back(i+1);
        }
        cout<<array.size();
        int ans = cum(array,k,0);
        return ans;
    }
};