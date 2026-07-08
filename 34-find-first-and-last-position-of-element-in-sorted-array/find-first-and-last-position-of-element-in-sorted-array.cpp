class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res;
        vector<int>out;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                res.push_back(i);
            }
        }
        int s=res.size();
        if(s>=2){
            out.push_back(res[0]);
            out.push_back(res[(s-1)]);
        }
        else if(s==1){
    out.push_back(res[0]);
    out.push_back(res[0]);
}
        else{
            out.push_back(-1);
            out.push_back(-1);
        }
        return out;
    }
     
};