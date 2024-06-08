class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       cost.push_back(0);
        for(int i=cost.size()-3;i>-1;i--){
            int m = min(cost[i]+cost[i+1],cost[i]+cost[i+2]);
            cost[i] = m;
        }
        return min(cost[0],cost[1]);
    }
};