   int solve(vector<int>&piles,int i,int j,vector<vector<int>>&dp){
        
        if(i==j)return piles[i];
        if(i>j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int a = piles[i]+min(solve(piles,i+2,j,dp),solve(piles,i+1,j-1,dp));
        
        int b =piles[j]+min(solve(piles,i+1,j-1,dp),solve(piles,i,j-2,dp));
        int ans = max(a,b);
        return dp[i][j] = ans;
        
    }
    bool stoneGame(vector<int>& piles) {
       int n =piles.size();
        
        int sum =0;
        for(auto &x:piles)sum+=x;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
       int maxAlice = solve(piles,0,n-1,dp);
        
       int Bob =sum-maxAlice;
        
        if(maxAlice>Bob)return true;
        return false;
        
    }
