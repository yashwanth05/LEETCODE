// class Solution {
// public:
//     vector<int> findColumnWidth(vector<vector<int>>& grid) {
//         std::vector<int> ans;
//         for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid[i].size();i++){
//                 int max1 = 0;
//                 if(grid[i][j]<=0){max1++;grid[i][j]*=-1;}
//                 while(grid[i][j]>0){
//                     max1++;
//                     grid[i][j] /= 10;
//                 }
//                 ans[j] = max(ans[j],max1);
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int m = grid.size(),n=grid[0].size(),i,j;
        vector<int> ans(n);
        int y=0;
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                y = 0;
                if(grid[i][j]<0 || grid[i][j]==0){y++;grid[i][j]*=-1;}
                while(grid[i][j]>0){
                    y++;
                    grid[i][j] /= 10;
                }
                ans[j] = max(ans[j],y);
            }
        }
        return ans;
    }
};