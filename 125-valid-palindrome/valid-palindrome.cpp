class Solution {
public:
    bool isPalindrome(string s) {
        string res1;
        for(auto i : s){
            if(isalnum(i)){
                res1+=tolower(i);
            }
           
        }
        string res2;
        for(int i=res1.size()-1;i>=0;i--){
            res2+=res1[i];
        }

        return res1==res2;
    }
};