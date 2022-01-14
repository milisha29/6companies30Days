 bool dfs(int src,vector<int>adj[],vector<bool>&vis,vector<bool>&dfsvis){
      vis[src]=true;
      dfsvis[src]=true;
      
      for(auto &x:adj[src]){
          if(!vis[x]){
              if(dfs(x,adj,vis,dfsvis)) return true;
          }
          else if(dfsvis[x]){
              return true;
          }
      }
      dfsvis[src]=false;
      return false;
  }
    bool isCycle(vector<int>adj[],int V){
      vector<bool>vis(V,false);
      vector<bool>dfsvis(V,false);
      
      for(int i=0;i<V;i++){
          if(!vis[i]){
             if( dfs(i,adj,vis,dfsvis))return true;
          }
          
      }
      return false;
    }
	bool isPossible(int N, vector<pair<int, int> >& pre) {
	    // Code here
	   //We can imagine it as a graph and chekc for cycle if cycle exits then tasks cannot be done
	   
	   vector<int>adj[N];  //it will have n vertices as n tasks
	   
	   //now edges are given in prerequisite array 
	   int edges = pre.size();
	   for(int i=0;i<edges;i++){
	       int x =pre[i].first;
	       int y =pre[i].second;
	       
	       adj[y].push_back(x);
	   }
	   
	   //now the graph has been formed we need to check cycle in it 
	   
	   if(isCycle(adj,N))return false;
	   return true;
	}
