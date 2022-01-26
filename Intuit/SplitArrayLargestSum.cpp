bool canSplit(int mid,vector<int>&nums,int m){

    int currsum=0,sub=1;
        
        for(int i=0;i<nums.size();i++){
   currsum+=nums[i];
            
            if(currsum>mid){
                currsum=nums[i];
                
                sub++;
                if(sub>m){
                    return false;
                }
            }
        }
    return true;

    
    }
    int splitArray(vector<int>& nums, int m) {
        int n =nums.size();
        
        int i =INT_MIN,j =0;
        
        for(int k=0;k<n;k++){
           i=max(i,nums[k]);   //max of array
           j+=nums[k];   //sum of all array elements
        }
        
        //applying binary search to get the minm ,largest subarray sum
        int res;
        while(i<=j){
            int mid =i +((j-i)/2);
            
            if(canSplit(mid,nums,m)){
                res=mid;
                j=mid-1;
            }
            else{
               i =mid+1;
            }
        }
        
       return res; 
        
        
    }
