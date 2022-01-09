vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int>ans;
      multiset<int, greater<int>>s;
        for(int i=0;i<k;i++){
            s.insert(arr[i]);
        }
        
        ans.push_back(*s.begin());
        
        for(int i=k;i<n;i++){
            auto it = s.find(arr[i-k]);
            
            s.erase(it);
            s.insert(arr[i]);
            
            ans.push_back(*s.begin());
        }
        
        return ans;
    }
