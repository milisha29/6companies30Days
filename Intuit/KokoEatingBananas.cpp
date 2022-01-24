  int minEatingSpeed(vector<int>& piles, int h) {
        int n =piles.size();
        int maxm =*max_element(piles.begin(),piles.end());
        
        
        int i=1,j=maxm,count,ans=0,m,res=maxm;
        
        while(i<=j){

        int mid = i+ (j-i)/2;
        ans=0;
        for(int i=0;i<n;i++){
        ans+=ceil(double(piles[i])/mid);
        }
            if(ans<=h){
             res = mid;
                j=mid-1;
            }
            
         else i=mid+1;
            
        }
        
       return res; 
    }
