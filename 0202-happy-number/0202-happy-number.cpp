class Solution {
public:
    bool isHappy(int n) {
        
        while(n!=1&&n!=4){
            long long int temp=0;
            while(n!=0){
            int d=n%10;
            temp+=d*d;
            n=n/10;
            }
            n=temp; 
        }
        if(n==1){
            return true;
        }
        return false;
    }
};