class Solution {
public:
    typedef pair<int,int> p;
    struct comp {
     bool operator()(p &p1 ,p &p2){
         return p1.second>p2.second;
     }
    };
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        long ans=0,spd=0,perf,mineff;
        long mod =1000000007;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({efficiency[i],speed[i]});
        }
        
        sort(v.begin(),v.end(),greater<p>());   
        //sorted based on efficiency descending
        
        //priority queue as min heap so as we pop pair with min speed
        priority_queue<p,vector<p>,comp>pq;
        
        for(int i=0;i<n;i++){
            pq.push(v[i]);
           mineff=v[i].first;
           spd+=v[i].second;
            if(pq.size()>k){
                            spd-=pq.top().second;
            pq.pop();}
             
            perf =((spd *mineff));
            if(perf>ans)ans =perf;
            
            
            
        }
        
        return ans%mod;
    }
};
