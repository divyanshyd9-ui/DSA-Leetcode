class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> hash;
        int len=0;
        int left=0;
        
        for(int i=0;i<s.length();i++){
           while(hash[s[i]]){
            hash[s[left]]--;
            left++;

           }
           hash[s[i]]++;
            len=max(len,i-left+1);
        }
        
       
        return len;
        
    }
};