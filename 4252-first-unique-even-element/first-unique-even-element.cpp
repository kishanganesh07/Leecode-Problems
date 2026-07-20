class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int>ud;
        for(int i : nums){
            ud[i]++;
        }
        for (int i: nums){
            if(i % 2 == 0 && ud[i] == 1){
                return i;
            }
        }
        return -1;
    }
};