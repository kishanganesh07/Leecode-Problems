class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>um;
        for(auto i : knowledge){
            um[i[0]]=i[1];
        }
        string res="";
        string word="";
        bool in=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                in=true;
                continue;
            }
            else if(s[i]==')'){
                if(um.find(word)!=um.end()){
                    res+=um[word];
                }
                else{
                    res+='?';
                }
                word="";
                in=false;
            }
            else if(in){
                word+=s[i];
            }
            else{
                res+=s[i];
            }
        }
        return res;
    }
};