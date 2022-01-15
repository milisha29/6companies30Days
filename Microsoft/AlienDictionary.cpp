 void topo(int src,vector<vector<int>>adj,vector<bool>&vis,string &ans){
        vis[src]=true;
        
        for(auto &x:adj[src]){
            if(!vis[x]){
                topo(x,adj,vis,ans);
            }
        }
        char ch = src+'a';
        ans = ch+ans; 
    }
//Given Function "findorder"
    string findOrder(string dict[], int N, int K) {
        //code here
        string ans="";
        vector<vector<int>>adj(K);
        for(int i=0;i<N-1;i++){
            string s1 =dict[i];
            string s2=dict[i+1];
            //creating a graph (directed) in which u->v shows that u comes before v
            for(int j=0;j<min(s1.length(),s2.length());j++){
                if(s1[j]!=s2[j]){
                    adj[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                }
            }
            
            
        }
        //now we have a graph and we can calculate topological order of this graph
//we inserted graph such that for each u->v, u<v and thus topological order will give                                  
    //me.
        vector<bool>vis(K,false);
            for(int i=0;i<K;i++){
                if(!vis[i])
                {
                    topo(i,adj,vis,ans);
                }
            }
            
            
        return ans;
    }
