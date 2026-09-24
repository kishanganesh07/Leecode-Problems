class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int number=nums[i];
            int some=0;
            while(number!=0){
                some+=number%10;
                number/=10;
            }
            if(i==some){
                return i;
            }
        }
        return -1;
    }
};