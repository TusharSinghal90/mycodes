class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size(),c=matrix[0].size();
        int row=0,col=c-1;
        while(row<r){
   if(target==matrix[row][col])
       return true;
   else if(target<matrix[row][col]){
       int i=row,j=col-1;
       while(j>=0){
           if(target==matrix[i][j])
               return true;
           j--;}
       return false;
           }
            
       else
           row++;}
        return false;
        }
           
            
        
        
        
    
};