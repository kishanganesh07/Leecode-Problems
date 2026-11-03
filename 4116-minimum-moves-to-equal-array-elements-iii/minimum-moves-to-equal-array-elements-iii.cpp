class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int maxidig=nums[nums.size()-1];
        for(int i=0;i<nums.size()-1;i++){
            count+=maxidig-nums[i];
        }
        return count;
    }
};