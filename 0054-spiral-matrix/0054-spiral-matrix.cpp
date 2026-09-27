class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty()||matrix[0].empty()){
            return {};
        }
        int m=matrix.size(),n=matrix[0].size();
        vector<int> ans;
        int srow=0,erow=m-1,scol=0,ecol=n-1;
        while(srow<=erow && scol<=ecol){
            for(int j=scol;j<=ecol;j++){
                ans.push_back(matrix[srow][j]);
            }
            srow++;
            for(int j=srow;j<=erow;j++){
               
                ans.push_back(matrix[j][ecol]);
            }
            ecol--;
            if(srow<=erow){
            for(int j=ecol;j>=scol;j--){
                
                ans.push_back(matrix[erow][j]);
                
            }}
            erow--;
            if(scol<=ecol){
            
            for(int j=erow;j>=srow;j--){
                
                ans.push_back(matrix[j][scol]);
              
            } }
              scol++;

        }
        return ans;
        
    }
};