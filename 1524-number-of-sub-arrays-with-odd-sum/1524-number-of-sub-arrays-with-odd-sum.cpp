class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1'000'000'007;
        int odd = 0, even = 0, answer = 0;

        for (int x : arr) {
            if (x % 2 == 0) {
                even++;          
            } else {
                swap(odd, even);  
                odd++;           
            }

            answer = (answer + odd) % MOD;
        }

        return answer;
    }
};