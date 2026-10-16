class Solution {
public:
    int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            int a=i;
            bool isok = true;
            bool changed = false;
            while(a!=0){
                int digit=a%10;
               if (digit == 3 || digit == 4 || digit == 7) {
                    isok = false;
                    break;
                }

                if (digit == 2 || digit == 5 ||
                    digit == 6 || digit == 9) {
                    changed = true;
                }
                a/=10;

            }
            if(isok && changed) count++;
        }
        return count;
    }
};