class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans = 0;
        sort(intervals.begin(),intervals.end());
        for(int i=intervals.size()-1;i>0;i--){
            if(intervals[i][0]<intervals[i-1][1]){
                ans++;
                intervals.erase(intervals.begin()+i-1);
            }
        }
        return ans++;
    }
};