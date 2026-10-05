class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>um;
        int count=0;
        for(auto i : allowed){
            um[i]++;
        }
        for(auto i : words){
            bool yes=true;
            for(auto j : i){
                if(um.find(j)==um.end()){
                    yes=false;
                }
            }
            if(yes){
                count++;
            }
        }
        return count;
    }
};