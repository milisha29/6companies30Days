void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    for(int i=0;i<n;i++){
	        for(int j=i;j<n;j++){
	            if(nuts[i]==bolts[j]){
	                char temp;
	                temp =bolts[i];
	                bolts[i]=bolts[j];
	                bolts[j]=temp;
	                continue;
	            }
	        }
	    }
	    //Arranging nuts and bolts
	    vector<int>order(n);
	    iota(order.begin(),order.end(),0);
	    //order= 0,1,2,3,n-1
	    
	    sort(order.begin(),order.end(),[&](int i,int j){
	        return nuts[i]<bolts[j];
	    });
	    
	    for(int i=0;i<n;i++){
	        nuts[i]=bolts[order[i]];
	    }
	    for(int i=0;i<n;i++){
	        bolts[i]=nuts[i];
	    }
	    
	    
	}
