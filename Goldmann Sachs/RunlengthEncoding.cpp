string encode(string src)
{     
  //Your code here 
  string ans="";

int i=0,count;
while(i<src.length()){
    char c=src[i];
    ans+=c;
    count=0;
    while(src[i]==c){
        count++;
        i++;
    }
    ans+=to_string(count);
    
}
return ans;
}  
