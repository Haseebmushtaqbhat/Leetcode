class Solution {
public:
    vector<int> findOrder(int nodes, vector<vector<int>>& graph) {
       vector<int> adj[nodes];
       int edges=graph.size();
    for(int i=0;i<edges;i++){
        int u=graph[i][0];
        int v=graph[i][1];
        adj[u].push_back(v);
    }
  
  vector<int>indegree(nodes,0);
  queue<int> q;
  vector<int> ans;
  for(int i=0;i<nodes;i++){
      for(auto it:adj[i]){
          indegree[it]++;
      }
  }
  for(int i=0;i<nodes;i++){
      if(indegree[i]==0){
          q.push(i);
      }
  }
  while(!q.empty()){
      int temp=q.front();
      ans.push_back(temp);
      q.pop();
      for(auto it:adj[temp]){
          indegree[it]--;
          if(indegree[it]==0)q.push(it);
      }
  }
    reverse(ans.begin(),ans.end());
  
    if(ans.size()!=nodes) return {};
    return ans;
    }
};