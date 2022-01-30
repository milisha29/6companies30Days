   struct comp
    {
        bool operator()(const string &a, const string &b)
        {
            return a.length()==b.length() ? (a>b) : a.length()>b.length();
        }    
    };
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string,vector<string>,comp>s;
        //min heap : min at the top;
        
        for(int i=0;i<nums.size();i++){
            s.push((nums[i]));
            
            if(s.size()>k){
             s.pop();              
            }
            
        }
        
        // auto itr = s.end();
        return (s.top());
    }
