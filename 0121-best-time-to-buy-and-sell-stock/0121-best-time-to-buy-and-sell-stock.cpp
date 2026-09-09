class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min=prices[0];
        int max=0;
        for(int i=1;i<n;i++){
            if(min>prices[i]){
                min=prices[i];
                        }
             int cmax=prices[i]-min;
                if(cmax>max){
                max=cmax;}
        }
        return max;
        
    }
};