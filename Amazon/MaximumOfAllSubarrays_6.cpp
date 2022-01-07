 vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        multiset<int,greater<int>>s;
        for(int i=0;i<k;i++){
        s.insert(nums[i]);
        }
        
        ans.push_back(*s.begin());
        
        for(int i=k;i<nums.size();i++){
            s.insert(nums[i]);
            auto it =s.find(nums[i-k]);
            
            s.erase(it);
            
            ans.push_back(*s.begin());
        }
        
        return ans;
    }
