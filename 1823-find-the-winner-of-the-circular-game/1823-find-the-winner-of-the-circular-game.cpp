class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> game(n,0);
        for(int i=0;i<n;i++){
            game[i]=i+1;
        }
        
       int i=0;
       while(game.size()!=1){
        i=(i+k-1)%game.size();
        game.erase(game.begin()+i);
       }
        
        return game[0];
        
    }
};