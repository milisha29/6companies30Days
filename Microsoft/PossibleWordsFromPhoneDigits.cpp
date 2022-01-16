//Function to find list of all words possible by pressing given numbers.
    string codes[10]={".",".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};// array of 10 for index 
    //till 9;
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        if(N==0){
            vector<string>empty;
            empty.push_back("");
            return empty;
        }
        //for 2 3 4
        //separate 2;
        int first = a[0];
        
        //recursion for rest
        vector<string>recans = possibleWords(a+1,N-1);//ans for 34
        
        string firststr=codes[first]; //firststr="abc"
        vector<string>myans;
        for(int i=0;i<firststr.length();i++){
            for(auto &x:recans){
                string k = firststr[i]+x;
                myans.push_back(k);
            }
        }
        return myans;
    }
