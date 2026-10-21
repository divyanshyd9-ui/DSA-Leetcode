class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        stack<int> s;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C"){
                s.pop();
            }
            else if(ops[i]=="D"){
                int b=s.top();
                s.push(2*b);
            }
            else if(ops[i]=="+"){
                int b=s.top();
                s.pop();
                int a=s.top();
                s.push(b);
                s.push(a+b);
            }
            else{
                s.push(stoi(ops[i]));
            }
        }
        int sum=0;
        while(s.size()!=0){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};