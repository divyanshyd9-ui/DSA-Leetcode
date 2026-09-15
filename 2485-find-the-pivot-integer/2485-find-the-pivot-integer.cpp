class Solution {
public:
    int pivotInteger(int n) {
        int sum=0;
        for(int x=1;x<=n;x++){
            int left=0;
            int right=0;
            for(int i=1;i<x;i++){
                left+=i;
            }
            for(int i=x+1;i<=n;i++){
                right+=i;
            }
            if(left==right){
                return x;
            }
        }
        return -1;
        
    }
};