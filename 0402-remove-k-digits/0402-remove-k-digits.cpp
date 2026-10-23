class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.length() == k) {
            return "0";
        }
        stack<char> s;
        for (int i = 0; i < num.length(); i++) {
            while (!s.empty() && s.top() > num[i] && k > 0) {
                s.pop();
                k--;
            }
            
                s.push(num[i]);
            
        }
        while(k--&&!s.empty()){
            s.pop();
        }
        string ans;
        while (!s.empty()) {
            ans += s.top();
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        int j = 0;
       
        while (ans[j] == '0'&&j<ans.length()) {
            
            j++;
        }
        ans=ans.substr(j);
        return ans.empty()? "0":ans;
    }
};