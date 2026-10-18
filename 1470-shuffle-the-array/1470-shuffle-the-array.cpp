class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2 * n);
        int low = 0;
        int high = n;
        int i=0;
        while (low < n && high < nums.size()) {
            ans[i]=nums[low];
            low++;
            i++;
           ans[i]=nums[high];
           i++;
            high++;
        }
        return ans;
    }
};