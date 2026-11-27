class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>um;
        for(auto i : strs){
            string a=i;
            sort(a.begin(),a.end());
            um[a].push_back(i);
        }
        vector<vector<string>>res;
        for(auto i : um){
            res.push_back(i.second);
        }
        return res;

        
    }
};