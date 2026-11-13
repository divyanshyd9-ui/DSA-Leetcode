class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int sic=1,sdc=1,best=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                sic++;
                sdc=1;
            }
            else if(nums[i]<nums[i-1]){
                sdc++;
                sic=1;
            }
            else{
                sic=sdc=1;
            }
            best=max(best,max(sic,sdc));
        }
        
        return best;
        
    }
};