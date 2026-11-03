class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=-1;
         for(int i=0;i<nums.size();i++){
            n=max(n,nums[i]);
            
        }
        int mini=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]!=n){
                nums[i]++;
                mini++;
            }
            
        }
        return mini;
        
    }
};