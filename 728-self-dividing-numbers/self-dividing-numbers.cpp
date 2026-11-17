class Solution {
public:
    bool check(int a){
        int num=a;
        while(num>0){
            int digit = num % 10;
            if (digit == 0 || a % digit != 0) return false;
            num/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        for(int i=left;i<=right;i++){
            if(check(i)) res.push_back(i); 
        }
        return res;
    }
};