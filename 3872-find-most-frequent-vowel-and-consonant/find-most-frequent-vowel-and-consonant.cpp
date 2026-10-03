class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<int,int>um;
        unordered_map<int,int>um1;
        int vcount=0;
        int ccount=0;
        for(auto i : s){
            if(i=='a' || i=='e' || i=='o' || i=='u' || i=='i'){
                um[i]++;
            }
            else{
                um1[i]++;
            }
        }
        for(auto i : um){
            vcount=max(i.second,vcount);
        }
        for(auto i : um1){
            ccount=max(i.second,ccount);
        }
        return vcount+ccount;
        
    }
};