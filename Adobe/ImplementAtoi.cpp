 int atoi(string s) {
        //Your code here
        int ans=0,flag=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                ans=ans*10+(s[i]-'0');
            }
            else if(s[i]==45){
                //when minus is given
                flag=1;
                
            }
            else{
                return -1;
            }
        }
        if(flag)return -ans;
        return ans;
    }
