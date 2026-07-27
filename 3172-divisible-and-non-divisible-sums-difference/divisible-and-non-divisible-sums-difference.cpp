class Solution {
public:
    int differenceOfSums(int n, int m) {
        int res1=0;
        int res2=0;
        for(int i=1 ; i<=n ; i++){
            if(i%m == 0){
                res2+=i;
            }
            else{
                res1+=i;
            }

        }
        return res1-res2;
    }
};