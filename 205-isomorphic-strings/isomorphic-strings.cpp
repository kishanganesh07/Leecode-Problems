class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>um;
        unordered_map<char,char>um2;
        for(int i=0;i<s.size();i++){
            if(um.find(s[i])!=um.end()){
                if(um[s[i]]!=t[i]){
                    return false;
                }
            }
            else{
                if(um2.find(t[i]) != um2.end()){

                return false;
                }
                um[s[i]]=t[i];
                um2[t[i]]=s[i];

            }
        }
        return true;
    }
};