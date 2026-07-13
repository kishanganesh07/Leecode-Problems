class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string res;
        for(char i :s){
            if(st.empty()){
                st.push(i);
            }
            else if(st.top()==i){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};