class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int a=aliceSizes.size();
        int b=bobSizes.size();
        int suma=0,sumb=0;
        for( int i:aliceSizes){
            suma+=i;
        }
        for(int i:bobSizes){
            sumb+=i;
        }
        int diff=(suma-sumb)/2;
        unordered_set<int> st(bobSizes.begin(), bobSizes.end());

        for (int x : aliceSizes) {
            int y = x - diff;

            if (st.find(y) != st.end())
                return {x, y};
        }

        return {};
    }
};