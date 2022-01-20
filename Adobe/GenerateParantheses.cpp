class Solution
{
    public:
       void solve(vector<string>&vec, string op, int open, int close)
   {
       if(open==0 && close==0)
       {
           vec.push_back(op);
           return;
       }
       if(open!=0)
       {
           string op1=op;
           op1.push_back('(');
           solve(vec,op1,open-1,close);
       }
       if(close>open)
       {
           string op1=op;
           op1.push_back(')');
           solve(vec,op1,open,close-1);
       }
   }
   vector<string> AllParenthesis(int n) 
   {
       // Your code goes here
       vector<string>vec;
       string op;
       int open=n;
       int close=n;
       solve(vec,op,open,close);
       return vec;
   }
};
