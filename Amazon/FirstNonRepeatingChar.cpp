string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char,int>mp;
		   vector<char>v;
		    string s="";
		   int n =A.length();
		   
		   for(int i=0;i<n;i++){
		   if(mp.find(A[i])!=mp.end()){
		      auto it =find(v.begin(),v.end(),A[i]);
		      if(it!=v.end())v.erase(it);
		   }
		   else
		   {
		       mp[A[i]]++;
		       v.push_back(A[i]);
		   }
	   if(v.size()==0)s+='#';
	   else s+=v[0];
		   }
		   return s;
		}
