vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
         Trie* dict = new Trie();
        for(int i = 0; i < n; ++i)
        {
            dict->insert(contact[i]);
        }

        vector<vector<string>> ans(s.size());
        
        for(int i = 0; i < s.size(); ++i) 
        {
            vector<string> res = dict->wordsWithPrefix(s.substr(0, i + 1));
            if(res.empty())
            {
                ans[i] = {"0"};
            }
            else {
                ans[i] = res;
            }
        }
        return ans;
    }
