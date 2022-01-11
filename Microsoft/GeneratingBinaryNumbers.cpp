vector<string> generate(int n)
{
	// Your code here
	vector<string>ans;
	
	int i=0;
	queue<string>q;
	q.push("1");
	
	while(!q.empty()){
	    string s =q.front();
	    q.pop();
	    i++;
	    ans.push_back(s);
	    if(i==n)break;
	    q.push(s+"0");
	    q.push(s+"1");
	    
	}
	return ans;
}
