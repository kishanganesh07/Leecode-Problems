class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int number=INT_MAX;
        for(int i=0;i<nums.size();i+=2){
            string s=to_string(nums[i+1]);
            int digit1;
            if(s.size()==3){
                 digit1=(nums[i]*1000)+nums[i+1];
            }
            else if(s.size()==2){
                 digit1=(nums[i]*100)+nums[i+1];
            }
           else if(s.size()==1){
                 digit1=(nums[i]*10)+nums[i+1];
            }
            else{
                digit1=(nums[i]*10000)+nums[i+1];
            }
            number=min(number,digit1);
        }
        return number;
    }
};