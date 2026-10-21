class Solution {
public:
    string makeGood(string s) {
        stack<char> stk;
        for (int i = 0; i < s.length(); i++) {
            if (!stk.empty() &&
                (s[i] == tolower(stk.top()) || s[i] == toupper(stk.top()))&& s[i]!=stk.top()) {
                stk.pop();
            } else {
                stk.push(s[i]);
            }
        }
        string ans;
        int i = 0;
        while (stk.size() != 0) {
            ans += stk.top();
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};