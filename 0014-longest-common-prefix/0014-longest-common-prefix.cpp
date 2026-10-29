class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n=s.size();
        sort(s.begin(),s.end());
        string f=s[0],l=s[n-1];
        if(f[0]!=l[0]){
            return "";
        }
        string prefix="";
        for(int i=0;i<min(f.length(),l.length());i++){
            if(f[i]!=l[i]){
                return prefix;
            }
            else{
                prefix+=f[i];
            }
            

        }
        return prefix;

        
    }
};