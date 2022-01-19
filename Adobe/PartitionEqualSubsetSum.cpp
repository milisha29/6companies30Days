bool helper(int n,int arr[],int sum,int pos,vector<vector<int>>&mem){
       
       if(sum==0)return true;
       
       if(pos>=n ||sum<0)return false;
       if(mem[pos][sum]!=-1)return mem[pos][sum];
       int firstchoice =helper(n,arr,sum-arr[pos],pos+1,mem);  //taken that element
       int secondchoice =helper(n,arr,sum,pos+1,mem);  //not taken
       
       
       return mem[pos][sum]=firstchoice|| secondchoice;
       
   }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)sum+=arr[i];
        if((sum&1))return 0;
         vector<vector<int>>mem;
        
        mem.resize(N+1,vector<int>(sum/2+1,-1));
        return helper(N,arr,sum/2,0,mem);
    }
