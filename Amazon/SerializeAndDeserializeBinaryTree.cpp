class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    void preorder(Node*root,vector<int>&ans){
        if(!root){
            ans.push_back(-1);
            return;
        }
        ans.push_back(root->data);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int>ans;
       preorder(root,ans);
       
       return ans;
        
    }
    Node*de(vector<int>a,int &i){
        if(a[i]==-1 || i>=a.size()){
            i++;
            return NULL;
        }
        Node* k =new Node(a[i++]);
        
        k->left = de(a,i);
        k->right = de(a,i);
        return k;
    }
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       int i=0;
      Node*root =de(A,i);
      return root;
      
    }

};
