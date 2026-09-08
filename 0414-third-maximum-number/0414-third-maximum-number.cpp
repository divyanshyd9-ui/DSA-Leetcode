class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int swap_count=0;
            for(int j=0;j<n-i-1;j++){
                if(nums[j]>nums[j+1])
                    swap(nums[j],nums[j+1]);
                    swap_count++;
            }
            if(swap_count==0)
                break;

        }
        int max=nums[n-1],count=1;
        for(int i=n-2;i>=0;i--){
            
            if(nums[i]!=max){
            max=nums[i];
            count++;}
            if(count==3)
            return max;
        }
        
        return nums[n-1];
        
    }
};