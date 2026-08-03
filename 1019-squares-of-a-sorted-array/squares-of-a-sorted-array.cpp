class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right=nums.size()-1;
        int current=nums.size()-1;
        vector<int> ans(nums.size());
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                ans[current]=nums[left]*nums[left];
                left++;

            }
            else{
                ans[current]=nums[right]*nums[right];
                right--;
            }
            current--;
        }
    return ans;
    }
};