class Solution {
public:
    int solve(int num,int digit){
        int ans=0;
        while(num>0){
            int d=num%10;
            num/=10;
            if(d==digit) ans++;
        }
        return ans;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        for(auto i : nums){
            ans+=solve(i,digit);
        }
        return ans;
    }
};