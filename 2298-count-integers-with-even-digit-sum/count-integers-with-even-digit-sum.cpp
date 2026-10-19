class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            int a=i;
            int some=0;
            while(a!=0){
                some+=a%10;
                a/=10;
            }
            if(some%2==0){
                count++;
            }
        }
        return count;
    }
};