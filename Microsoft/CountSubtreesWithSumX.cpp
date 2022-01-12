int solve(Node*root,int &count,int x){
    if(!root)return 0;
    
    int left =solve(root->left,count,x);
    int right=solve(root->right,count,x);
    
    int k =left +right +root->data;
    
    if(k==x)count++;
    return k;
}
int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	int count=0;
	
	int m =solve(root,count,X);
	
	return count;
}
