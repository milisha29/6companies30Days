 vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        /* Naive Approach Time Complexity:O(N*N)*/
        // vector<int>ans;
        // int flag=0;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=arr[j];
        //         if(sum==s){
        //             ans.push_back(i+1);
        //             ans.push_back(j+1);
        //             flag=1;
        //             break;
        //         }
        //         if(flag)break;
        //     }
        // }
        // if(flag)
        // return ans;
        // else{
        //     ans.push_back(-1);
        //     return ans;
        // }
        
        /*Optimised Approach*/
        // Using variable sized sliding window
        vector<int>ans;
        int i=0,j=0;
        long long sum=0;
        while(j<n){
            if(sum<s){
            while(sum<s && j<n){
                sum+=arr[j];
                j++;
            }
            j--;
            }
              if(sum>=s){
               
             while(sum>s && i<n){
             sum-=arr[i];
                i++;
            }
            if(sum==s){
                 ans.push_back(i+1);
                ans.push_back(j+1);
               return ans;
             }
        }
            j++;
        
        }
        ans.push_back(-1);
        return ans;
    }
