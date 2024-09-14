class Solution {
public:
    int dfs(vector<vector<int>>& grid,vector<vector<int>>& vis,int r,int c){
        queue<pair<int,int>> q;
        q.push({r,c});
        vis[r][c] = 1;
        int ans = 1;
        int rh[4] = {-1,0,1,0};
        int ch[4] = {0,1,0,-1};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr = row+rh[i];
                int nc = col+ch[i];
                if(nr>=0 && nr<grid.size() && nc<grid[0].size() && nc>=0 && !vis[nr][nc] && grid[nr][nc] ==1){
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                    ans++;
                }
            }
        }
        return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size(),0));
        int ans = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(!vis[i][j] && grid[i][j]==1){
                    int maxi = dfs(grid,vis,i,j);
                    ans = max(ans,maxi);
                }
            }
        }
        return ans;
    }
};
