void dfs(vector<vector<int>>& grid,int &count,pair<int,int>p,int m,int n){
         int i=p.first,j=p.second;
        grid[i][j]=0; //mark this pair as visited
         count++;
         int xarr[]={0,-1,-1,-1,0,1,1,1};
        int  yarr[]={-1,-1,0,1,1,1,0,-1};
        
         for(int k=0;k<8;k++){
             int x= i+xarr[k];
             int y=j+yarr[k];
             pair<int,int>pair={x,y};
             if(x<0 || y<0 || x>=n || y>=m || grid[x][y]==0)continue;
             
             else{
             dfs(grid,count,pair,m,n);
             }
         }
     }
    int findMaxArea(vector<vector<int>>& grid) {
        int n =grid.size();
        int m = grid[0].size();
        
        int maxm =0;
        for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
      pair<int,int>p ={i,j};
            if(grid[i][j]==1){
                
                //it means if not visited yet
                int count=0;
                dfs(grid,count,p,m,n);
                maxm =max(count,maxm);
            }
        
        
        }
        
        }
        return maxm;
    }
