 // Recursive Approach
  int solve(int a,int b,int i,int j){
        if(i==a-1 && j==b-1)return 1;
        
        int x=0,y=0;
        
      if(i+1<a) x= solve(a,b,i+1,j);
      if(j+1<b) y =solve(a,b,i,j+1);
      return x+y;
    }
    int NumberOfPath(int a, int b)
    {
        //code here
        int ans =solve(a,b,0,0);
        return ans;
    }

//Dynamic Programming 
int NumberOfPath(int a, int b)
    {
        //code here
        int dp[a][b];
        
        dp[a-1][b-1]=1;
        for(int i=a-1;i>=0;i--){
            for(int j=b-1;j>=0;j--){
                if(i==a-1 && j==b-1)continue;
                
                int x=0,y=0;
                if(i+1<a)x=dp[i+1][j];
                if(j+1<b)y=dp[i][j+1];
                
                dp[i][j]=x+y;
            }
        }
        return dp[0][0];
    }
