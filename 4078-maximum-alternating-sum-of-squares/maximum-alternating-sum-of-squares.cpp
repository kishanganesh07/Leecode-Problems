class Solution {
public:
    static bool custom(int a,int b){
            return abs(a)>abs(b);
        }
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(),nums.end(),custom);
        int i=0;
        int j=nums.size()-1;
        long long total=0;
        while(i<j){
            total+=(1LL*nums[i]*nums[i]);
            total-=(1LL*nums[j]*nums[j]);
            i++;
            j--;
        }
        if(i==j){
            total+=(1LL*nums[i]*nums[i]);
        }
        return total;
    }
};