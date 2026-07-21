class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int res=0;
        for(int i:nums){
            res+=i;
        }
        
        return res%k;
    }
};