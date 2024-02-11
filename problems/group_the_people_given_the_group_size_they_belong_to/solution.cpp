class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        map<int, vector<int>> myMap;
        for(int i=0;i<groupSizes.size();i++){
            myMap[groupSizes[i]].push_back(i);
        }
        for (auto& pair : myMap) {
            int key = pair.first;
            vector<int>& values = pair.second;
            for (int i = 0; i < values.size(); i=i+key) {
                    auto start = values.begin() + i;
                    auto end = values.begin() + i+key ;
                    vector<int> result(key);
                    copy(start, end, result.begin());
                    ans.push_back(result);
            }
            // break;
        }
        return ans;
    }
};