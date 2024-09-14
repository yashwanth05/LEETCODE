/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        queue<int> q;
        map<int,Employee*> mp;
        for(int i=0;i<employees.size();i++){
            mp[employees[i]->id] = employees[i];
        }
        q.push(id);
        int max_id = 0;
        for(int i=0;i<employees.size();i++){
            max_id = max(max_id,employees[i]->id);
        }
        vector<int> vis(max_id + 1, 0);
        vis[id] = 0;
        int ans = 0;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            ans = ans +  mp[x]->importance;
            for(auto it:mp[x]->subordinates){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return ans;
    }
};