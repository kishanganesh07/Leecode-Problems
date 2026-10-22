class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int>um;
        int i=0;
        for(auto c  : order){
            um[c]=i;
            i++;
        }
        for(int  i=1;i<words.size();i++){
            int j=0;

            for(;j<words[i].size() && j < words[i - 1].size();j++){
                if(um[words[i][j]]<um[words[i-1][j]]){
                    return false;
                }
                if (um[words[i][j]] > um[words[i - 1][j]]) {
                    break;
                }
            }
              if (j == words[i].size() &&
                words[i].size() < words[i - 1].size()) {
                return false;
            }
 
        }
        return true;
    }
};