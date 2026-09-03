class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double res=DBL_MAX;
        while(nums.size()>0){
            int big;
            int small;
            sort(nums.begin(),nums.end());
            big=nums[nums.size()-1];
            small=nums[0];
            double average=(big+small)/2.0;
            if(average<res){
                res=average;
            }
            nums.erase(nums.begin());
            nums.pop_back();
        }
        return res;
    }
};