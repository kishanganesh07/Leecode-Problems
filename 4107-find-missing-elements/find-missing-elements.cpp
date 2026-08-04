class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int>us(nums.begin(),nums.end());
        int minelement=*min_element(nums.begin(),nums.end());
        int maxelement=*max_element(nums.begin(),nums.end());
        vector<int>res;
        for(int i=minelement;i<=maxelement;i++){
            if(!us.count(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};