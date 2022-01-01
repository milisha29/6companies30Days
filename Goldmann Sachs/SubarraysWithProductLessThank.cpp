 int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int ans =0;
        int i=0,j=0;
        long long prod=1;
        while(j<n){
            prod*=a[j];
           
            
                while(prod>=k){
                    prod=prod/a[i];
                    i++;
                }
                 if(prod<k){
                ans+=j-i+1;
                
            }
                j++;
            }
        
        return ans;
    }
