int isValid(vector<vector<int>> mat){
        // code here
        unordered_set<string>s;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(mat[i][j]!=0){
                string row = "row+"+to_string(i)+"+"+to_string(mat[i][j]);
                string col = "col+"+to_string(j)+"+"+to_string(mat[i][j]);
                string box ="box+"+to_string((i/3)*3+(j/3))+"+"+to_string(mat[i][j]);
                if(s.find(row)!=s.end()|| s.find(col)!=s.end()||s.find(box)!=s.end())return 0;
                
                s.insert(row);
                s.insert(col);
                s.insert(box);
                }
            }
        }
        return 1;
    }
