class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        
        int n=s.length();
        string answer="";
        for(int i=0;i<n;i++){
            string word="";
        while(i<n&&s[i]!=' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        
        if(word.length()>0){
            answer += " "+word;
        }}
        return answer.substr(1);
        
    }
};