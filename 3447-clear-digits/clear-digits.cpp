class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        string res;
        for(char i :s){
            if(isdigit(i)){
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
        reverse(res.begin(),res.end());
        return res;

    }
};