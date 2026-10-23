class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> s;
        for (int i = 0; i < a.size(); i++) {
            if (!s.empty() && (s.top() > 0 && a[i] < 0)) {
                if (abs(s.top()) < abs(a[i])) {
                    while (!s.empty() && (abs(s.top()) < abs(a[i])) &&
                           (s.top() > 0 && a[i] < 0)) {
                        s.pop();
                    }
                    if (s.empty()) {
                        s.push(a[i]);
                    } else if (abs(s.top()) == abs(a[i])) {
                        if (s.top() > 0 && a[i] < 0) {
                            s.pop();
                        } else {
                            s.push(a[i]);
                        }
                    }
                    else if(s.top()<0&&a[i]<0){
                        s.push(a[i]);
                    }
                }

                else if (abs(s.top()) == abs(a[i])) {
                    s.pop();
                } else {
                    continue;
                }

            } else {
                s.push(a[i]);
            }
        }
        vector<int> ans;

        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};