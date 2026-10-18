class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int max1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }

            else{
                    max1=max(max1,count);
                    count=0;
                }
            
        }
        return max(max1,count);
        
    }
};