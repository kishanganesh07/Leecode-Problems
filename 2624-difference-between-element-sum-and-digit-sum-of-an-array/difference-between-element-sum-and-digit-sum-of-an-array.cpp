class Solution {
public:
    int getDigits(int a){
        int b=0;
        while(a!=0){
            b+=a%10;
            a/=10;
        }
        return b;
    }
    int differenceOfSum(vector<int>& nums) {
        int res1=0;
        int res2=0;
        for(int i:nums){
            res1+=getDigits(i);
            res2+=i;
        }
        return abs(res1-res2);
    }
};