class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>um;
        for(auto i:s){
            if(um[i]){
                 um[i]++;
            }
            else{
                um[i]=1;
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (um[s[i]] == 1) {
                return i;
            }
        }

        return -1;

    }
};