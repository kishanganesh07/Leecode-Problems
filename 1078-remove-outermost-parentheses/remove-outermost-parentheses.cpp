class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>stk;
        string res="";
        for(auto i : s){
            if(i=='('){
                if(!stk.empty()){
                    res+=i;
                }
                stk.push(i);
            }
            else{
                stk.pop();
                  if (!stk.empty()) {
                    res += i;
                }
            }
        }
        return res;
    }
};