vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int>ans;
        int rs =0,re =r-1;
        int cs =0,ce =c-1;
        int i=0;
        while(rs<=re && cs<=ce){
            if(i%2==0){
                //row from starting
                //row = rs;
                
                for(int j=cs;j<=ce;j++){
                    ans.push_back(matrix[rs][j]);
                }
                rs++;
                
                //col from end
                //col = ce;
                for(int j=rs;j<=re;j++){
                    ans.push_back(matrix[j][ce]);
                }
                ce--;
                
            }
            else{
                //row from end
                //row = re
                for(int j=ce;j>=cs;j--)ans.push_back(matrix[re][j]);
                
                re--;
                
                // col from start
                //col =cs
                
                for(int j=re;j>=rs;j--)ans.push_back(matrix[j][cs]);
                
                cs++;
                
                
                
                
            }
            i++;
        }
        return ans;
    }
