class Solution {
public:
    bool isPalindrome(int x) {
        long long int original=x,temp=0;
        if(x<0){
            return false;
        }
        while(x!=0){
            int d=x%10;
            temp=temp*10+d;
            x=x/10;
        }
        if(temp==original){
            return true;
        }
        return false;
        
    }
};