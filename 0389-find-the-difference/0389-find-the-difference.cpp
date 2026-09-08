class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> hash;
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']+=1;
        }
       for(int i=0;i<t.length();i++){
            hash[t[i]-'a']-=1;
            if(hash[t[i]-'a']<0)
            return t[i];
        }
       
        return ' '; 
        
        
    }
};