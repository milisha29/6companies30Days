 int orangesRotting(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        int minutes=0,totalOranges=0,pushedInQ=0;
       queue<pair<int,int>>q;
        //First we find out how many non empty cells arre present
        //And also push rotten oranges in the queue
        
        for(int i=0;i<m;i++){
    
            for(int j=0;j<n;j++){
                if(grid[i][j]==2)q.push({i,j});
                if(grid[i][j]!=0)totalOranges++;
            }    
        }
       
        while(!q.empty()){
         int k =q.size();
            
            while(k--){
 int i=q.front().first,j=q.front().second;
                pushedInQ++;
            if(i-1>=0 && grid[i-1][j]==1){  
                    
                    q.push({i-1,j});
                    grid[i-1][j]=2;
                }
                if(i+1<m && grid[i+1][j]==1){
                   
                    q.push({i+1,j});
                    grid[i+1][j]=2;
                }
                if(j-1>=0 && grid[i][j-1]==1){
                    grid[i][j-1]=2;
                  
                    q.push({i,j-1});
                }
               
                if(j<n-1 && grid[i][j+1]==1){
                    
                    q.push({i,j+1});
                    grid[i][j+1]=2;
                }
                q.pop();
          
            }
            if(!q.empty())minutes++;
        
        }
        
      
        return (totalOranges==pushedInQ)?minutes:-1;
        
        
        
    }
