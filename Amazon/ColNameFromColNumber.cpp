 string colName (long long int n)
    {
        // your code here
        string ans="";
        
        while(n){
            long long k= (n-1)%26;
            
            char c ='A'+k;
            ans =c+ans;
            n=(n-1)/26;
        }
        return ans;
    }
