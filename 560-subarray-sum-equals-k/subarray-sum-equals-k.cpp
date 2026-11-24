class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int some=0;
            for(int j=i;j<nums.size();j++){
                some+=nums[j];
                if(some==k)count++;
            }
        }
        return count;
    }
};