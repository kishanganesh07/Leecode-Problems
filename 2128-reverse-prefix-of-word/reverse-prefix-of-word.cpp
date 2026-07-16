class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>stk;
        int si=word.size();
        string res="";
        int index=-1;
        for(int  i=0;i<word.size();i++){
            if(word[i]==ch){
                stk.push(word[i]);
                index=i;
                break;
            }
            else{
                stk.push(word[i]);
            }

        }
        if (index == -1) {
    return word;
}
        while(!stk.empty()){
            res+=stk.top();
            stk.pop();
        }
       res += word.substr(index+1);
        return res;
    }
};