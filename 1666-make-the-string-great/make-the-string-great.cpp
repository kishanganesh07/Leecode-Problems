class Solution {
public:
    string makeGood(string s) {
        stack<char>stk;
        for(auto i : s){
            if (!stk.empty() &&
                ((isupper(i) && stk.top() == tolower(i)) ||
                 (islower(i) && stk.top() == toupper(i)))){
                stk.pop();
            }
            else{
                stk.push(i);
            }
        }
        string res;
        while(!stk.empty()){
            res+=stk.top();
            stk.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};