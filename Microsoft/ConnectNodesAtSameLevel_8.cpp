 void connect(Node *root)
    {
       // Your Code Here
       //using level order
       queue<Node*>q;
       if(root)q.push(root);
       
       while(!q.empty()){
           int n =q.size();
           
           while(n--){
               Node* k =q.front();
               q.pop();
               
               if(n==0)k->nextRight=NULL;
               else {
                   k->nextRight =q.front();
               }
               if(k->left)q.push(k->left);
               if(k->right)q.push(k->right);
           }
           
       }
       
    }    
