 bool dfs(int src,vector<int>adj[],vector<bool>&vis,int dest,int c){
        if(src==dest)return true;
        vis[src]=true;
        for(auto &x:adj[src]){
            if(src==c && x==dest){
                continue;
            }
            if(!vis[x]){
                if(dfs(x,adj,vis,dest,c))return true;
            }
        }
        
        return false;
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        vector<bool>vis(V,false);
        if(dfs(c,adj,vis,d,c))return false;
        return true;
    }
