class Solution {
public:
    bool isPalindrome(string s) {
        int st=0,end=s.length()-1;
        while(st<end){
            if(!((tolower(s[st])>='a'&&tolower(s[st])<='z')||(s[st]>='0'&&s[st]<='9'))){
                st++;
                continue;
            }
            if(!((tolower(s[end])>='a'&&tolower(s[end]<='z'))||(s[end]>='0'&&s[end]<='9'))){
                end--;
                continue;
            }
           if(tolower(s[st])!=tolower(s[end])){
            return false;
           }
           st++;
           end--;
        }
        return true;
        
    }
};