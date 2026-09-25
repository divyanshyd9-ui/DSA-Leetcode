class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=haystack.find(needle);
        if(i>=0){
            return i;
        }
        return -1;
        
    }
};