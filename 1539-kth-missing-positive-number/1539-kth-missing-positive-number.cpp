class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int hash[3001]={0};
        int n=arr.size();
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
       
        int count=0;
        for(int i=1;i<=3000;i++){
            if(hash[i]==0){
                count++;}
            
            if(count==k){
                return i;
            }

        }
        return -1;
        
    }
};