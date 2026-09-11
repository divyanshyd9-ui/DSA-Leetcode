class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int x=nums.size();
        for(int i=0;i<x;i++){
            nums.push_back(reverse(nums[i]));

        }
        set<int> s;
        for(int i=0;i<2*x;i++){
            s.insert(nums[i]);
        }
        return s.size();
        
    }
    int reverse(int n){
        int rev=0;
        while(n!=0){
            int d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
        return rev;
    }
};