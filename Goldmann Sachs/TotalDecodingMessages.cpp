int CountWays(string str){
		    // Code here
		    if(str.length()==0 || str[0]=='0')return 0;
		    
		    if(str.length()==1)return 1;//1 way to decode 1 digit
		    
		    int count1=1,count2=1;
		    long long int mod= 1000000007;
		    for(int i=1;i<str.length();i++){
		        int d= str[i]-'0';
		        int dd =(str[i-1]-'0')*10+d;
		        int count=0;
		        if(d>0)count=(count+count1)%mod;
		        if(dd>=10 && dd<=26)count=(count+count2)%mod;
		        count2= count1;
		        count1= count;
		    }
		    return count1%mod;
		}
