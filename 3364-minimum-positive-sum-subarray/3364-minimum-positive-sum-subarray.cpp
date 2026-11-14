class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int answer = INT_MAX;
        int n = nums.size();

        for (int len = l; len <= r; ++len) {
            int sum = 0;

            for (int i = 0; i < len; ++i) {
                sum += nums[i];
            }

            if (sum > 0) {
                answer = min(answer, sum);
            }

            for (int right = len; right < n; ++right) {
                sum += nums[right] - nums[right - len];

                if (sum > 0) {
                    answer = min(answer, sum);
                }
            }
        }

        return answer == INT_MAX ? -1 : answer;
    }
};