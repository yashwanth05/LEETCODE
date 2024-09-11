class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<points.size();i++){
            pq.push({points[i][0],points[i][1]});
        }
        int prevs = INT_MIN;
        int preve = INT_MAX;
        int count = 1;
        while(!pq.empty()){
            int start = pq.top().first;
            int end = pq.top().second;
            pq.pop();
            if(start>preve){
                count++;
                preve = end;
                prevs = start;
            }
            else{
                preve = min(preve,end);
                prevs = max(prevs,start);
            }
        }
        return count;
    }
};