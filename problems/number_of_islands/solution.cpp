class Solution {
public:
    void fun(vector<vector<char>>& grid, int r, int c, vector<vector<int>>& vis) {
        queue<pair<int,int>> q;
        q.push({r,c});
        vis[r][c] = 1;

        // Define movement directions (up, right, down, left)
        int rh[4] = {-1, 0, 1, 0};
        int ch[4] = {0, 1, 0, -1};

        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            // Traverse in all 4 possible directions
            for (int i = 0; i < 4; i++) {
                int rc = row + rh[i];
                int cc = col + ch[i];
                if (rc >= 0 && rc < grid.size() && cc >= 0 && cc < grid[0].size() && !vis[rc][cc] && grid[rc][cc] == '1') {
                    vis[rc][cc] = 1;
                    q.push({rc, cc});
                }
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        if (rows == 0) return 0;
        int cols = grid[0].size();
        
        // Create a visited matrix to track visited cells
        vector<vector<int>> vis(rows, vector<int>(cols, 0));
        int count = 0;

        // Traverse the grid and apply BFS/DFS for each unvisited '1' (land)
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    count++;
                    fun(grid, i, j, vis);  // Perform BFS/DFS to mark the entire island
                }
            }
        }
        return count;
    }
};
