class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res="";
        for(string i : words){
           int sum=0;
            for(char j : i){
                sum+=weights[j-'a'];
            }
            int value=sum%26;
            res+=char('z'-value);
        }
        return res;
    }
};