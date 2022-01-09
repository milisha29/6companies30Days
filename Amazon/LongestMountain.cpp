 int longestMountain(vector<int>& arr) {
        int maxm=0;
        int count=0;
        int n =arr.size();
        //we will find peak element
        //peak element will be present from index 1 to n-2
        
        for(int i=1;i<=n-2;){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){

            count =0;
                int j=i;
                while(j>0 && arr[j]>arr[j-1]){
      
                    count++;j--;
                }
                
                //for the right 
                
                while(i<n-1 && arr[i]>arr[i+1]){

                count++;
                    i++;
                }
                
            maxm =max(maxm,count+1);
            
            
            }
            else{
            i++;}
        }
        return maxm;
    }
