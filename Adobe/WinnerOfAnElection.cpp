   //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        
        vector<string>ans;
        map<string,int>mp;
        string k;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int max=0;
        for(auto &x:mp){
            if(x.second>max){
                max =x.second;
                k=x.first;
            }
        }
     
        ans.push_back(k);
        ans.push_back(to_string(mp[k]));
        return ans;
    }
