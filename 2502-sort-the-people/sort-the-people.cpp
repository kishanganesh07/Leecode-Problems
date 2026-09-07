class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string>um;
        vector<string>res;
        for(int i=0;i<names.size();i++){
            um[heights[i]]=names[i];
        }
        sort(heights.rbegin(),heights.rend());
        for(int i : heights){
            res.push_back(um[i]);
        }
        return res;
    }
};