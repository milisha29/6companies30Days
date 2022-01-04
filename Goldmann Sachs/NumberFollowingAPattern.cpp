 string printMinNumberForPattern(string s){
        // code here 
       stack<int>st;
       int a=1;
       string ans="";
       for(int i=0;i<s.length();i++){
           if(s[i]=='D'){
               st.push(a);a++;
               
           }
           else{
               st.push(a);a++;
               while(!st.empty()){
                  ans+=to_string(st.top());
                  st.pop();
               }
           }
       }
       
       st.push(a);
       while(!st.empty()){
          ans+=to_string(st.top());
          st.pop(); 
       }
       return ans;
    }
