class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int l1 = matrix.size();
        int l2 = matrix[0].size();
        bool val = false;
        for(int r=0;r<l1;r++){
            for(int c=0;c<l2;c++){
                if(matrix[r][c]==0){
                    matrix[0][c] = 0;
                    if(r>0){
                        matrix[r][0] = 0;
                    }
                    else{
                        val = true;
                    }
                }
            }
        }
        for(int r = 1;r<l1;r++){
            for(int c = 1;c<l2;c++){
                if(matrix[0][c]==0 || matrix[r][0]==0){
                    matrix[r][c] = 0;
                }
            }
        }
        if(matrix[0][0]==0){
            for(int r=0;r<l1;r++){
                matrix[r][0] = 0;
            }
        }
        if(val == true){
            for(int c=0;c<l2;c++){
                matrix[0][c] = 0;
            }
        }
    }
};