class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        stack<char>stk;
        for(auto i : s){
            if(stk.empty()){
                stk.push(i);
                count++;
            }
            else if(stk.top()=='(' && i == ')'){
                stk.pop();
                count--;
            }
            else {
                stk.push(i);
                count++;
            }
        }
        return count;
    }
};