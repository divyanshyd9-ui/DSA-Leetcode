class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double avg=sum/k;
        for(int i=k;i<nums.size();i++){
            sum=sum-nums[i-k]+nums[i];
            double a=sum/k;
            avg=max(a,avg);
        }
        return avg;
        
    }
};