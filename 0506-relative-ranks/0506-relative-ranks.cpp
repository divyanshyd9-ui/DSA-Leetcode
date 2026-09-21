class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        int n = score.size();

        // Bubble sort in descending order
        // But store original index along with score
        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({score[i], i});
        }

        for (int i = 0; i < n - 1; i++) {
            int swap_count = 0;

            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j].first < arr[j + 1].first) {
                    swap(arr[j], arr[j + 1]);
                    swap_count++;
                }
            }

            if (swap_count == 0) {
                break;
            }
        }

        vector<string> answer(n);

        for (int i = 0; i < n; i++) {

            int originalIndex = arr[i].second;

            if (i == 0) {
                answer[originalIndex] = "Gold Medal";
            }
            else if (i == 1) {
                answer[originalIndex] = "Silver Medal";
            }
            else if (i == 2) {
                answer[originalIndex] = "Bronze Medal";
            }
            else {
                answer[originalIndex] = to_string(i + 1);
            }
        }

        return answer;
    }
};
