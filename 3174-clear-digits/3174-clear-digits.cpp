class Solution {
public:
    string clearDigits(string s) {
        stack<char> stk;
        for(int i=0;i<s.length();i++){
            if(!stk.empty()&&s[i]>=48&&s[i]<=57){
                stk.pop();
            }
            else{
                stk.push(s[i]);
            }
        }
        string ans;
        while(!stk.empty()){
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

        
    }
};