class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();

        vector<pair<int, int>> athletes;

        for (int i = 0; i < n; i++) {
            athletes.push_back({score[i], i});
        }

        sort(athletes.rbegin(), athletes.rend());

        vector<string> ans(n);

        for (int rank = 0; rank < n; rank++) {
            int index = athletes[rank].second;

            if (rank == 0)
                ans[index] = "Gold Medal";
            else if (rank == 1)
                ans[index] = "Silver Medal";
            else if (rank == 2)
                ans[index] = "Bronze Medal";
            else
                ans[index] = to_string(rank + 1);
        }

        return ans;
    }
};
