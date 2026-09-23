class Solution {
public:
    bool isfreqsame(int hash[],int hash1[]){
        for(int i=0;i<26;i++){
            if(hash[i]!=hash1[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int hash[26]={0};
        for(int i=0;i<s1.length();i++){
            hash[s1[i]-'a']++;
        }
        int n=s1.length();
        for(int i=0;i<s2.length();i++){
            int windidx=0;
            int cindx=i;
            int hash1[26]={0};
            while(windidx<n && cindx<s2.length()){
                hash1[s2[cindx]-'a']++;
                windidx++; cindx++;
            }
            if(isfreqsame(hash,hash1)){
                return true;
            }
        }
        return false;
        
    }
};