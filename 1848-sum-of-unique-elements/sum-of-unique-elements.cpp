class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>um;
        int res=0;
        for(auto i : nums){
            um[i]++;
        }
        for(auto i : um){
            if(i.second==1){
               res+=i.first;
            }
        }
        return res;
    }
};