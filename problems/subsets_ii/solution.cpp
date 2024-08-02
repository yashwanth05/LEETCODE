class Solution {
public:
    void sub(std::vector<std::vector<int>>& ans, std::vector<int> arr,std::vector<int> temp, int n) {
        if (n == arr.size()) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(arr[n]);
        sub(ans, arr, temp,n+1);
        temp.pop_back();
        while (n + 1 < arr.size() && arr[n] == arr[n + 1]) n++;
        sub(ans, arr,temp,n+1);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        // vector<int> temp;
        sub(ans,nums,{},0);
        return ans;
    }
};