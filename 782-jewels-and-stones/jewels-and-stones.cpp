class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>um;
        int count=0;
        for(auto i : stones){
            um[i]++;
        }
        for(auto i : jewels){
            if(um.find(i)!=um.end()){
                count+=um[i];
            }
            
        }
        return count;

    }
};