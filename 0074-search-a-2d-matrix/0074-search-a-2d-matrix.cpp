class Solution {
public:
    bool rowsearch(vector<vector<int>>& mat,int target,int row){
        int n=mat[0].size();
        int st=0,end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target==mat[row][mid]){
                return true;
            }
            else if(target>mat[row][mid]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(),n=matrix[0].size();
       
        int sr=0,er=m-1;
        while(sr<=er){
            int mr=sr+(er-sr)/2;
            if(target>=matrix[mr][0]&&target<=matrix[mr][n-1]){
                return rowsearch( matrix, target,mr);
            }
            else if(target>=matrix[mr][n-1]){
                sr=mr+1;
            }
            else{
                er=mr-1;
            }    
        }
       
        return false;
    }
};