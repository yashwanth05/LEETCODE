class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0;
        int rsum = 0;
        int maxsum = 0;
        for(int i=0;i<k;i++){
            lsum = lsum + cardPoints[i];
        }
        maxsum = lsum;
        int rind = cardPoints.size()-1;
        int lind = k-1;
        while(lind>=0){
            lsum = lsum - cardPoints[lind];
            rsum = rsum + cardPoints[rind];
            lind--;
            rind--;
            maxsum = max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};