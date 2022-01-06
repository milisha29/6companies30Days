	ull getNthUglyNo(int n) {
	    // code here
	    ull *dp =new ull[n+1];
	    dp[1]=1;
	    //We will have 3 pointers p2,p3,p5 
	    int p2=1,p3=1,p5=1;
	    //initially all pointers are at position 1
	    
	    ///now filling the dp from index 2
	    for(int i=2;i<=n;i++){
	        ull factor1 = 2*dp[p2];
	        ull factor2= 3*dp[p3];
	        ull factor3 =5*dp[p5];
	        
	        ull minm =min(factor1,min(factor2,factor3));
	        
	        dp[i]=minm;
	        if(minm==factor1)p2++;
	        if(minm==factor2)p3++;
	        if(minm==factor3)p5++;
	        
	    }
	    return dp[n];
	    
	}
