int findPosition(int N , int M , int K) {
       
        if(N==1)return 1;
       K=(M%N+K-1);
        
        return (K==N)?N:K%N;
    }
