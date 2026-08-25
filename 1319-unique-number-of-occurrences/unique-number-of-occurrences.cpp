class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>um;
        set<int>res;
        vector<int>res2;
        for(auto i : arr){
            um[i]++;
        }
        for(auto i : um){
            res.insert(i.second);
            res2.push_back(i.second);
        }
        return res.size()==res2.size();

    }
};