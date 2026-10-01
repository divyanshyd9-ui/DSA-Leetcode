class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftsum(n, 0);
        vector<int> rightsum(n, 0);
        int suml = 0, sumr = 0;
        for (int i = 0; i < n; i++) {
            sumr += nums[i];
        }
        
        for (int i = 0; i < n ; i++) {
            leftsum[i]=suml;
            suml += nums[i];
            
        }
        for (int i = 0; i < n; i++) {
            sumr -= nums[i];
            rightsum[i]=sumr;
        }

        vector<int> result(n, 0);
        for (int i = 0; i < n; i++) {
            result[i]=abs(leftsum[i] - rightsum[i]);
        }
        return result;
    }
};