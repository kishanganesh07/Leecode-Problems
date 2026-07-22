class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>res;
        unordered_map<string,int>um;
        int i=0;
        int j=9;
        while(j<s.size()){
            string word= s.substr(i, 10);
            if(um[word]){
                um[word]++;
               
            }
            else{
                um[word]=1;
                
            }
            i++;
            j++;
        }
        for(auto a:um){
            if(a.second>=2){
                res.push_back(a.first);
            }
        }
        return res;
    }
};