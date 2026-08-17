class Solution {
public:
    string toLowerCase(string s) {
        string res="";
        for(char i: s){
            if(isupper(i)){
                 i=i+32;
                 res+=i;


            }
            else{
                res+=i;
            }
        }
        return res;
    }
};