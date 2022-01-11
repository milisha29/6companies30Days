class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    void nearestGreaterToleft(int price[],int n,vector<int>&ans){
        //we use a stack for it
        stack<pair<int,int>>st;
        for(int i=0;i<n;i++){
        while(!st.empty()){
            if(st.top().first>price[i]){
                ans.push_back(st.top().second);
                break;
            }
            else{
                st.pop();
            }
        }
        if(st.empty())ans.push_back(-1);
        
        st.push({price[i],i});
        
        }
        
    }
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       //finding nearest greater to left for each index
       vector<int>ans;
       nearestGreaterToleft(price,n,ans);
       for(int i=0;i<n;i++){
           ans[i]=i-ans[i];
       }
       return ans;
    }
};
