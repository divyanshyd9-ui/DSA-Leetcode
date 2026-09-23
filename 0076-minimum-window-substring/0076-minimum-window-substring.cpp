class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length(),m=t.length();
        int hash[256]={0};
        for(int i=0;i<m;i++){
            hash[t[i]]++;
        }
        int minlen=INT_MAX;
        int count =0;
        int l=0,r=0;
        int sidx=-1;
        while(r<n){
            if(hash[s[r]]>0){
                count++;
               
            }
             hash[s[r]]--;
            while(count==m){
                if(r-l+1<minlen){
                    minlen=r-l+1;
                    sidx=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0){
                    count--;
                }
                l++;
            }
            r++;
        }
        return sidx==-1? "": s.substr(sidx,minlen);
       
        
      
        
      
    }
};