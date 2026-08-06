class Solution {
public:
    int product(int a){
        int res=1,digit=0;
        while(a!=0){
            digit=a%10;
            res*=digit;
            a/=10;
        }
        return res;
    }
    int smallestNumber(int n, int t) {
       for(int i=n;i<n+10;i++){
        if(product(i)%t==0) return i;
       }
       return 0;
    }
};