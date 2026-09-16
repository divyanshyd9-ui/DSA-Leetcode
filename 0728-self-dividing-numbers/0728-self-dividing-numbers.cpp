class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for(int j=left;j<=right;j++){
            int x=j;
            bool ok =true;
            while(x>0){
                int d=x%10;
                if(d==0||j%d!=0){
                    ok=false;
                    break;
                }
                x/=10;
            }
            if(ok){
                arr.push_back(j);
            }
            
        }
        return arr;
        
    }
};