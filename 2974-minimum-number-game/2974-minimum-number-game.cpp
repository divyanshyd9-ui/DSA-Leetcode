class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;

        while(nums.size()) {
            int min1 = 101;
            int min2 = 101;
            int idx1 = -1, idx2 = -1;

            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] < min1) {
                    min2 = min1;
                    idx2 = idx1;

                    min1 = nums[i];
                    idx1 = i;
                }
                else if(nums[i] < min2) {
                    min2 = nums[i];
                    idx2 = i;
                }
            }

            arr.push_back(min2);
            arr.push_back(min1);

            if(idx1 > idx2) {
                nums.erase(nums.begin() + idx1);
                nums.erase(nums.begin() + idx2);
            }
            else {
                nums.erase(nums.begin() + idx2);
                nums.erase(nums.begin() + idx1);
            }
        }

        return arr;
    }
};