class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int swap_count=0;
            for(int j=0;j<n-i-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                    swap_count++;
                }
            }
            if(swap_count==0){
                break;
            }
        }
        int product1=nums[n-1]*nums[n-2]*nums[n-3];
        int product2=nums[0]*nums[1]*nums[n-1];
        return max(product1,product2);
        
    }
};