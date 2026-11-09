class Solution {
public:
    bool isprime(int n){
        if(n<2) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int idx=-1;
        int differnece=INT_MIN;
        int count=0;
        for(auto i=0;i<nums.size();i++){
            if(isprime(nums[i])){
                count++;
                if(idx<0){
                    idx=i;
                }
                if(differnece<abs(idx-i)){
                    differnece=abs(idx-i);
                }
            }
        }
        if(count==1) return 0;
        return differnece;
    }
};