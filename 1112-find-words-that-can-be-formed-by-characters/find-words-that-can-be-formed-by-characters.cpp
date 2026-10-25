class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>um;
        int res=0;
        for(auto i : chars){
            um[i]++;
        }
        for(auto i : words){
            unordered_map<char,int>um1;
            unordered_map<char,int>um2=um;
            int count=0;
            for(auto j : i){
                if(um2[j]>=1){
                    count++;
                    um2[j]--;
                }
            }
            if(i.size()==count){
                res+=i.size();
            }
        }
        return res;
    }
};