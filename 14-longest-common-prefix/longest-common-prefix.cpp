class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if(strs.empty()) return "";
        sort(strs.begin(),strs.end());
        for(auto i : strs){
            cout<<i<<" ";
        }
        string first=strs[0];
        string last=strs[strs.size()-1];
        string res="";
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]==last[i]){
                res+=first[i];
            }
            else{
                break;
            }
        }
                return res;
    }
};