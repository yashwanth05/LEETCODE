class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l1 = 0;
        int r1 = matrix.size()-1;
        int l = matrix[0].size()-1;
        int c;
        if(r1==0){
            c=0;
        }
        while(l1<=r1){
            int m1 = (l1+r1)/2;
            if(target>matrix[m1][l]){
                l1 = m1+1;
            }
            else if(target<matrix[m1][0]){
                r1 = m1-1;
            }
            else if(target<=matrix[m1][l] && target>=matrix[m1][0]){
                c=m1;
                break;
            }
        }
        int l2 = 0;
        int r2 = matrix[c].size()-1;
        cout<<c;
        if(r2==0){
            if(matrix[c][r2]==target){
                return true;
            }
            else{
                return false;
            }
        }
        while(l2<=r2){
            int m2 = (l2+r2)/2;
            if(matrix[c][m2]==target){
                return true;
            }
            else if(matrix[c][m2]<target){
                l2 = m2+1;
            }
            else{
                r2 = m2-1;
            }
        }
        return false;
    }
};
