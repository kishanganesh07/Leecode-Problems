class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>os(nums1.begin(),nums1.end());
        unordered_set<int>os2(nums2.begin(),nums2.end());

        vector<int>res;
        for(auto i:os){
            if(os2.find(i)!=os2.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};