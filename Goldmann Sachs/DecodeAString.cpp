string Decodestring(string &s ,int &i){
     string result ;
    
    while(i<s.length() && s[i]!=']'){
        if(isdigit(s[i])){
            int k=0;
            while(i<s.length() && isdigit(s[i]))k=k*10+s[i++]-'0';
            
            i++;
            string rec = Decodestring(s,i);
           while(k--) result+=rec;
           i++;
        }
        else{
            result+=s[i++];
        }
    }
    return result;
}
    string decodedString(string s){
        // code here
        int i=0;
        string ans=Decodestring(s,i);
        return ans;
    }
