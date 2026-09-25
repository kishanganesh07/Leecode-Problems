class Solution {
public:
    int mySqrt(int x) {

        if (x == 0 || x==1) {
            return x;
        }
        int low=0;
        int high=x-1;
        int res=0;
        while(low<=high){
            long long  mid=(low+high)/2;
            if(mid*mid<=x){
                low=mid+1;
                res=low-1;
            }
            else {
                high=mid-1 ;
            }
        }
        return res;
    }
};