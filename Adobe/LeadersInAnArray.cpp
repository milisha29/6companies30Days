vector<int> leaders(int a[], int n){
        // Code here
       //starting from end and we will check the element if it is greater than max.In max we will update the max element till iteration
    
    vector<int>v;
    int max=-1;
    for(int i=n-1;i>=0;i--){
        if(a[i]>=max){
            max=a[i];
            v.push_back(a[i]);
        }
    }
        
        
        
        reverse(v.begin(),v.end());
        return v;
    }
