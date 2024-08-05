class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        priority_queue<pair<int,int>> q;
        for(int i=0;i<boxTypes.size();i++){
            q.push({boxTypes[i][1],boxTypes[i][0]});
        }
        int count = 0;
        int ans = 0;
        while(!q.empty() && count<truckSize){
            pair<int,int> temp = q.top();
            q.pop();
            if(count + temp.second<truckSize){
                ans = ans + temp.second*temp.first;
                count = count + temp.second;
            }
            else{
                int quantity = truckSize - count;
                count = count + quantity;
                ans = ans + temp.first*quantity;
                // break;
            }
        }
        return ans;
    }
};