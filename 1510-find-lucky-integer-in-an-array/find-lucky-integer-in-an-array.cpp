class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        unordered_map<int,int>um;
        int high=-1;
        for(auto i  :arr){
            um[i]++;
        }
        for(auto i : um){
            if(i.first==i.second){
                if(i.first>high){
                    high=i.first;
                }
            }
        }
        return high;
    }
};