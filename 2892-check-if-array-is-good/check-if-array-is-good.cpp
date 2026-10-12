class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<2){
            return false;
        }
        
        unordered_map<int,int>um;
        for(auto i : nums){
            um[i]++;
        }
       
        int maxi = nums[nums.size() - 1];

        for (int i = 1; i < maxi; i++) {
            if (um[i] != 1) {
                return false;
            }
        }
        if(um[nums[nums.size()-1]]!=2){
            return false;
        }
        return true;
    }
};