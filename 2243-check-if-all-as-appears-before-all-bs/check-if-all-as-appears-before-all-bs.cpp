class Solution {
public:
    bool checkString(string s) {
            bool seen=false;
            for(auto i : s){
                if(i=='b'){
                    seen=true;
                }
                else if(seen){
                    return false;
                }
            }
            return true;
    }
};