class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<vector<int>> cols;
        vector<vector<int>> resultSet;
        for (int i = 0; i < grid.size(); i++) {
            vector<int> temp;
            for (int j = 0; j < grid.size(); j++) {
                temp.push_back(grid[j][i]);
            }
            cols.push_back(temp);
        }
        sort(grid.begin(),grid.end());
        sort(cols.begin(),cols.end());
        int count = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[i]==cols[j]) count++;
            }
        }
        return count;
    }
};