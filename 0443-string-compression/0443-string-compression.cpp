class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int idx=0;
        for(int i=0;i<n;i){
            char check=chars[i];
            int count=0;
            while(i<n&&chars[i]==check){
                count++;
                i++;
            }
            if(count==1){
                chars[idx++]=check;
                }
            else{
              chars[idx++]=check;
              string str=to_string(count);
              for(char dig:str){
                chars[idx++]=dig;
              }  
            }
        }
        chars.resize(idx);
        return idx;
       
        
    }
};