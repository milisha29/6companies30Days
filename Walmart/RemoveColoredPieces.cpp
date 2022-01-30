  bool winnerOfGame(string colors) {
        vector<int>A,B;
        int counta=0,countb=0;
        for(int i=0;i<colors.length();){
            counta=0;countb=0;
            
            while(colors[i]=='A'){
                 counta++;i++;
            }
            A.push_back(counta);
            
            while(colors[i]=='B'){
                countb++;
                i++;
            }
            B.push_back(countb);
        }
        int ansA=0,ansB=0;
        for(int i=0;i<A.size();i++){
            if(A[i]-2>0)
                ansA+=A[i]-2;
        }
         for(int i=0;i<B.size();i++){
            if(B[i]-2>0)
                ansB+=B[i]-2;
        }
        return (ansA>ansB)?true:false;
    }
