class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>res;
        for(int i=nums.size()-1;i>=0;i--){
            int temp=nums[i];
            while(temp!=0){
                res.push_back(temp%10);
                temp/=10;
            }
        }
            reverse(res.begin(),res.end());
        return res;
    }
};