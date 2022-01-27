
    void ngr(vector<int>arr,vector<int>&a){
        stack<int>st;
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
        while(!st.empty()){
            if(st.top()>arr[i]){
              a.push_back(st.top());
                break;
            }
            else{
                st.pop();
            }
        }
        
        if(st.empty())a.push_back(-1);
        st.push(arr[i]);
            
        }
        reverse(a.begin(),a.end());
    }
    vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        vector<int>ans;
        vector<int>nextgreat,nexttonext;
        
        ngr(arr,nextgreat);
        ngr(nextgreat,nexttonext);
        
        for(int i=0;i<arr.size();i++){
            if(nextgreat[i]>arr[i]){
                if(nexttonext[i]>nextgreat[i]){
                    ans.push_back(arr[i]);
                    ans.push_back(nextgreat[i]);
                    ans.push_back(nexttonext[i]);
                    return ans;
                }
            }
        }
       return ans;
    }
