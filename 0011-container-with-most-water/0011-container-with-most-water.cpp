class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int i = 0, j = n - 1;

        long long maxvol = 0;
        while (i < j) {
            long long tempvol = min(h[i], h[j]) * (j - i);
            if (tempvol > maxvol) {
                maxvol = tempvol;
            }
            if (h[i] < h[j]) {
                i++;
            } else {
                j--;
            }
        }
    
    return maxvol;
}
};
