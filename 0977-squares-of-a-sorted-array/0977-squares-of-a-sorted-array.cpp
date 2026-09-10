class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
        int n=nums.size();
         vector<int> answer(n);
        for(int i=0;i<n;i++){
            answer[i]=nums[i]*nums[i];
        }
        for(int i=0;i<n-1;i++){
            int swap_count=0;
            for(int j=0;j<n-i-1;j++){
                if(answer[j]>answer[j+1]){
                    swap(answer[j],answer[j+1]);
                    swap_count++;
                }
            }
            if(swap_count==0)
            break;
        }
        return answer;
        
    }
};