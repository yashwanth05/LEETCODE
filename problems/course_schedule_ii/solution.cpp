class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ind(numCourses,0);
        vector<int> adj[numCourses];
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                ind[it]++;
            }
        }
        vector<int> vis;
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(ind[i]==0){
                // cout<<i<<endl;
                q.push(i);
            }
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            // cout<<node<<endl;
            vis.push_back(node);
            for(auto it:adj[node]){
                ind[it]--;
                if(ind[it] == 0) q.push(it);
            }
        }
        if(vis.size()!=numCourses) return {};
        return vis;
    }
};