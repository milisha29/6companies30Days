 
    int solve(int arr[],int n,int i,vector<int>&dp){
        if(i>=n)return 0;
        
        if(dp[i]!=-1)return dp[i];
        
        int op1 = solve(arr,n,i+2,dp)+arr[i];
        int op2= solve(arr,n,i+1,dp);
        
        dp[i]=max(op1,op2);
        return dp[i];
    }
      
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
      
        vector<int>dp(n,-1);
       
        int ans =solve(arr,n,0,dp);
        return ans;
    }
