class Solution {
public:
    bool checkGoodInteger(int n) {
        int temp=n;
        int sum=0;
        int product=0;
        while(temp!=0){
            int a=temp%10;
            sum+=a;
            product+=a*a;
            temp/=10;
        }
        if(product-sum>=50){
            return true;
        }
        else{
            return false;
        }
        
    }
};