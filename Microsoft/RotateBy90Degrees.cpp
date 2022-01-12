void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    //last column becomes first row
    
    ///by taking transpose 1st col become first row
    
    //first taking transpose
    int n =matrix.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i!=j){
                swap(matrix[i][j],matrix[j][i]);
                
            }
        }
    }
    //now to reverse the order of rows 
    for(int i=0;i<n;i++){
        //for each col
        int j=0,k=n-1;
        while(j<k){
            swap(matrix[j][i],matrix[k][i]);
            j++;k--;
        }
    }
    
    
}
