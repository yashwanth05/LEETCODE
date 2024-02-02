class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        // for(int i=0;i<grid.size();i++){
        //     int low = 0;
        //     int high = grid[i].size()-1;
        //     int mid = (low+high)/2;
        //     while(low<high){
        //         if(grid[i][mid]>0){low = mid+1;}
        //         else if(grid[i][mid]<0){high = mid-1;}
        //         else if(grid[i][mid]==0){ans = ans + grid[i].size()-1-mid;}
        //         mid = (low+high)/2;
        //     }
        //     if(high<=low && grid[i][low]<0){
        //         ans = ans+grid[i].size()-low;
        //     }
        // }
        // for(int i=0;i<grid.size();i++){
        //     for(int j=0;j<grid[i].size();j++){
        //         if(grid[i][j]<0){ans++;}
        //     }
        // }
        for(int i=0;i<grid.size();i++){
            int h = grid[i].size()-1;
            while(h >= 0 && grid[i][h] < 0){
                h--;
            }       
            ans = ans + grid[i].size()-1-h;  
        }
        return ans;
    }
};