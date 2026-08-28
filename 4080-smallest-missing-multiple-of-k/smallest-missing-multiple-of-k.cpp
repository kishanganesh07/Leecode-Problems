class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>us;
        for(int i : nums){
            us.insert(i);
        }
        for(int i=k;;i+=k){
           
                if(us.count(i)==0){
                    return i;
                }
        }
        
    }
};