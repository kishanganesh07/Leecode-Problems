class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {


        int mini = INT_MAX;
        vector<int> a(nums.size(), 0);

        for(int i = nums.size() - 1; i >= 0; i--) {
            mini = min(nums[i], mini);
            a[i] = mini;
        }

        int maxi = 0;

        for(int i = 0; i < nums.size(); i++) {
            maxi = max(nums[i], maxi);

            int score = maxi - a[i];

            if(score <= k) {
                return i;
            }
        }

        return -1;
    }
};