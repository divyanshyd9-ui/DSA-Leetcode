class Solution {
public:
    int maxDepth(string s) {
        
        int left=0,right=0,ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==')'){
                right++;
            }
            if(s[i]=='('){
                
                left++;
            }
            ans=max(ans,left-right);
        }
           
        return ans;
        
    }
};