  vector<vector<string> > Anagrams(vector<string>& words) {
        //code here
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<words.size();i++){
            string s=words[i];
            
            sort(s.begin(),s.end());
            mp[s].push_back(words[i]);
        }
        for(auto &x:mp){
           
            
            ans.push_back(x.second);
        }
        return ans;
    }
