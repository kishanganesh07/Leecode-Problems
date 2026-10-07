class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>us(nums1.begin(),nums1.end());
        unordered_set<int>us1(nums2.begin(),nums2.end());
        int a=0;
        int b=0;
        for(auto i : nums1){
            if(us1.find(i)!=us1.end()){
                a++;
               
            }
        }
        for(auto i : nums2){
            if(us.find(i)!=us.end()){
                b++;
               
            }
        }
        return {a,b};
    }
};