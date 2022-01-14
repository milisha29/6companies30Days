class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>>ans;
        set <vector<int>> set;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int s=j+1,e=n-1;
                
                while(s<e){
                    int sum =arr[i]+arr[j]+arr[s]+arr[e];
                    
                    if(sum==k){
                        vector<int>a{arr[i],arr[j],arr[s],arr[e]};
                        sort(a.begin(),a.end());
                        set.insert(a);
                        s++;e--;
                    }
                    else if(sum>k)e--;
                    else s++;
                }
            }
        }
        for(auto &x:set){
            ans.push_back(x);
        }
        return ans;
    }
};
