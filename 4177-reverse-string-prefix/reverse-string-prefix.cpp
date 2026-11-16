class Solution {
public:
    string reversePrefix(string s, int k) {
        string a=s.substr(0,k);
        reverse(a.begin(),a.end());
        a+=s.substr(k,s.size());
        return a;
    }
};