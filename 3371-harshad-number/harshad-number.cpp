class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int temp=x;
        int res=0;
        while(temp>0){
            res+=temp%10;
            temp/=10;
        }
        if(x%res==0){
            return res;
        }
        else{
            return -1;
        }
    }
};