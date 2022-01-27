class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int solve(Node*root){
        if(!root)return 0;
        int d=root->data;
        int leftsum =solve(root->left);
        int rightsum =solve(root->right);
        
        root->data =leftsum+rightsum;
        
        return d+root->data;
    }
    void toSumTree(Node *root)
    {
        // Your code here
        int ans =solve(root);
    }
};
