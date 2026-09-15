class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            int swap_count=0;
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swap_count++;
                }
            }
            if(swap_count==0){
                break;
            }
        }
        int d=arr[1]-arr[0];
       for(int i=1;i<n-1;i++){
        if(arr[i+1]-arr[i]!=d){
            return false;
        }
       }
        return true;
        
    }
};