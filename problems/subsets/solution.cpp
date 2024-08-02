class Solution {
public:
    void sub(std::vector<std::vector<int>>& ans, std::vector<int>& arr, int n, std::vector<int>& temp) {
        if (n == arr.size()) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(arr[n]);
        sub(ans, arr, n + 1, temp);
        temp.pop_back();
        sub(ans, arr, n + 1, temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sub(ans,nums,0,temp);
        return ans;
    }
};