class Solution {
public:
    string sortSentence(string s) {
        map<int,string>um;
        string res;
        vector<string>a;
        string word;
        stringstream b(s);
        while(b>>word){
            a.push_back(word);
        }
        for(auto i : a){
            int size=i.size();
            char d=i[size-1];
            int num=d-'0';
            um[num]=i;
        }
        for(auto i : um){
           
            res+=i.second.substr(0,i.second.size()-1)+" ";
        }
        return res.substr(0,res.length()-1);
    }
};