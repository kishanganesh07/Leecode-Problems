class Solution {
public:
    bool validDigit(int n, int x) {
        int count=0;
        int last=0;
        int temp = n;

        while (temp != 0) {
            last = temp % 10;
            if (last == x) {
                count++;
            }
            temp /= 10;
        }
        if(last==x){
            return false;
        }
        if(count>=1){
            return true;
        }
        
        return false;
    }     
    
};