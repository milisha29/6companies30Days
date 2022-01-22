    void dfs(int src,vector<bool>&vis,vector<vector<int>>& isConnected){

    vis[src]=true;
        
        for(int j=0;j<isConnected.size();j++){
            if(src==j)continue;
            
            if(isConnected[src][j]==1 && !vis[j]){
           
                  dfs(j,vis,isConnected); 
            }
        }
    
    
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int N =isConnected.size();
        vector<bool>vis(N,false);
        int count=0;
        for(int i=0;i<N;i++){
            if(!vis[i]){
                count++;
                dfs(i,vis,isConnected);
            }
}
        return count;
    }
