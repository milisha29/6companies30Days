    int solve(int** dp,int start,int end){
        if(start>=end)return 0;
        if(dp[start][end]!=-1)return dp[start][end];
        int ans = INT_MAX;
        for(int i=start;i<=end;i++){
            int res = i+max(solve(dp,start,i-1),solve(dp,i+1,end));
            ans =min(res,ans);
            
        }
        dp[start][end]=ans;
        return ans;
    }
    int getMoneyAmount(int n) {
      int** dp =new int*[n+1];
        for(int i=0;i<=n;i++){
            dp[i]=new int[n+1];
            
            for(int j=0;j<=n;j++)dp[i][j]=-1;
        }
        
        return solve(dp,1,n);
        
    }
