class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<int> adj[n];
        vector<int> rvadj[n];
        for(auto it:connections){
            adj[it[0]].push_back(it[1]);
            rvadj[it[1]].push_back(it[0]);
        }
        queue<int> q;
        int op = 0;
        vector<int> vis(n,0);
        q.push(0);
        vis[0] = 1;
        while(!q.empty()){
            int l = q.size();
            while(l--){
                int node = q.front();
                q.pop();
                for(auto it:adj[node]){
                    if(!vis[it]){
                        vis[it] = 1;
                        op++;
                        q.push(it);
                    }
                }
                for(auto it:rvadj[node]){
                    if(!vis[it]){
                        vis[it] = 1;
                        q.push(it);
                    }
                }
            }
        }
        return op;
    }
};