class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> s;
        int j = 0;
        vector<string> ans;
        for (int i = 1; i <= n && j < target.size(); i++) {
            s.push(i);
            ans.push_back("Push");
            if (s.top() != target[j]) {
                s.pop();
                ans.push_back("Pop");
            } else {
                j++;
            }
        }
        return ans;
    }
};