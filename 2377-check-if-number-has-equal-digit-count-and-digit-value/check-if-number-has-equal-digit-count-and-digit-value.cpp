class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>um;
        for(auto i : num){
            um[i-'0']++;
        }
        for(int i=0;i<num.size();i++){
            if(num[i]-'0'!=um[i]) return false;
        }
        return true;
    }
};