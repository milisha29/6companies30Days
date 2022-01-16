map<pair<int,int>,int> mpp;
int helper(int arr[], int n, int S1, int S2){
        if(n<=0){
            return abs(S1-S2);
        }
        if(mpp.find({S1,S2})!=mpp.end()){
            return mpp[{S1,S2}];
        }
        return mpp[{S1,S2}]=
        min(helper(arr,n-1,S1,S2+arr[n-1]),helper(arr,n-1,S1+arr[n-1],S2));
}
int minDifference(int arr[], int n)  { 
	    int S1=0;
	    int S2=0;
	    return helper(arr,n,S1,S2);
} 
