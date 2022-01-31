class Solution
{
    public:
    //Function to find the largest number after k swaps.
    string ans="";
    void find(string str,int index,int k)
    {
        if(k == 0 || index >=str.length())
        {
            return;
        }
        char maxm=max(str[index],*max_element(str.begin()+index+1,str.end()));
        if(maxm==str[index])
        {
            find(str,index+1,k);
        }
        for(int i=str.length()-1;i>=0;i--)
        {
            if(str[i]==maxm)
            {
                swap(str[index],str[i]);
                ans=max(ans,str);
                find(str,index+1,k-1);
                swap(str[index],str[i]);
            }
        }
    }
    string findMaximumNum(string str, int k)
    {
       find(str,0,k);
       return ans;
    }
};
