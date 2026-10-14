class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int total_elements = n * n;
        unordered_map<int,int> um;
        for (int i = 1; i <= total_elements; i++) {
    um[i] = 0;
}
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                um[grid[i][j]]++;
            }
        }
        int missing=0;
        int repeated=0;
        for(auto i : um){
            if(i.second==2){
                repeated=i.first;
            }
            if(i.second==0){
                missing=i.first;
            }
        }
        return {repeated,missing};
    }
};