class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int min=0;
            for(int j=0;j<n;j++){
                if(nums[i]>nums[j]&&i!=j){
                    min++;
                }
            }
            ans[i]=min;
        }
        return ans;
    
        
    }
};