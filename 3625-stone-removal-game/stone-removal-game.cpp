class Solution {
public:
    bool canAliceWin(int n) {
        bool isOk=false;
        for(int i=10;n>=i;i--){
            n-=i;
            isOk=!isOk;
        }
        return isOk;
    }
};