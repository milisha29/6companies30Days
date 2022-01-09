  int minTime(Node* root, int target) 
    {
        // Your code goes here
        int ans=0;
        unordered_map<Node*,pair<int,Node*>>mp;         //storeparent;
        queue<Node*>qburned;
        queue<Node*>qp; //for parents 
        Node*final=NULL; //getting the target node
        unordered_set<Node*>s;  //to store visited
        // storing parents in storeparent map
       if(root) qp.push(root);
       mp[root]={-1,NULL};
       while(!qp.empty()){
           
           Node*k =qp.front();
           qp.pop();
           if(k->data==target)final =k;
           if(k->left){
               qp.push(k->left);
               mp[k->left]={k->data,k};
           }
            if(k->right){
               qp.push(k->right);
               mp[k->right]={k->data,k};
           }
       }
       
       
       
        if(final)qburned.push(final);
      while(!qburned.empty()){
          int k =qburned.size();
          while(k--){
          Node*m =qburned.front();
          s.insert(m);
          qburned.pop();
          if(mp[m].first!=-1 && s.find(mp[m].second)==s.end())qburned.push(mp[m].second);
       
          //pushed its parent in the queue
          
          if(m->left && s.find(m->left)==s.end())qburned.push(m->left);
          if(m->right && s.find(m->right)==s.end())qburned.push(m->right);
          
          
          }
          if(!qburned.empty())ans++;
      }
      
      return ans;
    }
