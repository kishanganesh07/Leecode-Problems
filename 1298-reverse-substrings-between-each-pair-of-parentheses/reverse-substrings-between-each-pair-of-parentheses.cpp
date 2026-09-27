class Solution {
public:
    string reverseParentheses(string s) {
        string res;
        string sentence;
        string words="";
        stack<string>stk;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                stk.push(words);
                words="";
            }
            else if(s[i]==')'){
                reverse(words.begin(),words.end());
                words=stk.top()+words;
                stk.pop();
            }
            else{
                words+=s[i];
            }
        }
         return words;
    }
};