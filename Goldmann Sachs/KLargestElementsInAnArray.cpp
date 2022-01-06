vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int>ans;
        multiset<int,greater<int>>s;
        
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
            auto it =s.end();
            if(s.size()>k){
                s.erase(--it);
            }
        }
        
        for(auto &val:s){
            ans.push_back(val);
        }
        return ans;
    }
