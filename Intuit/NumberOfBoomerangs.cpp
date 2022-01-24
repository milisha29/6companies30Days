 int numberOfBoomerangs(vector<vector<int>>& point) {
        int n =point.size();
        if(point.size()<3)return 0;
        unordered_map<double,int>mp;
        int ans=0;
        
        for(int i=0;i<n;i++){
            int x =point[i][0];
            int y= point[i][1];
            for(int j=0;j<n;j++){
                int x1 =point[j][0];
                int y1 =point[j][1];
                
                double dist = sqrt(pow(x-x1,2)+pow(y-y1,2));
                
               ans+=2*mp[dist]++;
                
          }
            mp.clear();
        }
      
        return ans;
    }
