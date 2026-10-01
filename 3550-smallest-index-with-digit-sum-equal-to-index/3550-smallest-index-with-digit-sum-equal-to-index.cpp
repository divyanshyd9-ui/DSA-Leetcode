class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int k=nums[i];
            int sum=0;
            while(k!=0){
                int d=k%10;
                sum+=d;
                k/=10;
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
        
    }
};