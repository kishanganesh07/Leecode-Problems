class Solution {
public:
    int Left(vector<int>nums,int x){
          int low=0;
        int high=nums.size()-1;
        int idx=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==x){
                idx=mid;
                high=mid-1;
            }
            else if(x>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return idx;

    }
    int Right(vector<int>nums,int x){
          int low=0;
        int high=nums.size()-1;
          int idx=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==x){
                idx=mid;
                low=mid+1;
            }
            else if(x<nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return idx;

    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>res;
        sort(nums.begin(),nums.end());
        int a=Left(nums,target);
        int b=Right(nums,target);
          if (a == -1) {
            return res;
        }
        for(int i=a;i<=b;i++){
            res.push_back(i);
        }
        return res;
    }
};