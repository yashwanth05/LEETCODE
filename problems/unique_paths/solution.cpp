class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> vec(m, vector<int>(n, 0));
        vec[m-1][n-1] = 1;
        int i = n-1;
        while(i>=0){
            int j = m-1;
            while(j>=0){
                if((i+1)<n && (j+1)<m){
                    vec[j][i] = vec[j+1][i] + vec[j][i+1];
                }
                else if((i+1)>=n && (j+1)<m){
                    vec[j][i] = vec[j+1][i];
                }
                else if((j+1)>=m && (i+1)<n){
                    vec[j][i] = vec[j][i+1];
                }
                j--;
            }
            i--;
            cout<<i<<" "<<j<<endl;
        }
        return vec[0][0];
    }
};