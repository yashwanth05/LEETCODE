class Solution {
public:
    void bfs(vector<vector<int>>& adj,vector<int>& vis,int node){
        vis[node] = 1;
        queue<int> q;
        q.push(node);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it:adj[node]){
                if(!vis[it]){
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int num = 0;
        vector<vector<int>> adj(n);
        vector<int> vis(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j] == 1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                bfs(adj,vis,i);
                num++;
            }
        }
        return num;
    }
};