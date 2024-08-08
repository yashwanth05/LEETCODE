class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(auto it:prerequisites){
            // if(it[0]==it[1]) return false;
            adj[it[1]].push_back(it[0]);
        }
        vector<int> inDegree(numCourses,0);
	    for(int i=0;i<numCourses;i++){
	        for(auto it:adj[i]){
	            inDegree[it]++;     
	        }
	    }
	    queue<int> q;
	    for(int i=0;i<numCourses;i++){
	        if(inDegree[i]==0){
	            q.push(i);
	        }
	    }
        if(q.empty()){
            return false;
        }
	    vector<int> ans;
	    while(!q.empty()){
	        int n = q.front();
	        q.pop();
	        ans.push_back(n);
	        for(auto it:adj[n]){
	            inDegree[it]--;
	            if(inDegree[it] == 0){
	                q.push(it);
	            }
	        }
	    }
	    for(int i=0;i<numCourses;i++){
            if(inDegree[i]!=0){
                return false;
            }
        }
        return true;
	}
};