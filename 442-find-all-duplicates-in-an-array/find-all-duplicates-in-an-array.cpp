class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>um;
        for(int i : nums){
            um[i]++;
        }
        for(auto i : um){
            if(i.second>=2){
                res.push_back(i.first);
            }
        }
        return res;
    }
};