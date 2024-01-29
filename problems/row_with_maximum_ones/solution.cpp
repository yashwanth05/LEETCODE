class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int ind = -1;
        int max = -1;
        std::vector<int> v;
        for(int i=0;i<mat.size();i++){
            int m = 0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){m++;}
            }
            if(m>max){max = m;
                v.clear();
                v.push_back(i);
                v.push_back(max);
            }
        }

        return v;
    }
};