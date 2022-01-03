 bool canPair(vector<int> nums, int k) {
        // Code here.
        if(nums.size()%2==1)return false;
        unordered_map<int,int>mp;
       
        for(int i=0;i<nums.size();i++){
            mp[nums[i]%k]++;
        }
        
        for(int i=0;i<nums.size();i++){
           int m =nums[i]%k;
           
           if(m==0 || m%k==0){
               if(mp[m]%2==1)return false;
           }
           else if(mp[m]!=mp[k-m])return false;
           
        }
       
        return true;
    }
