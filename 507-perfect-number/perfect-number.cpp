class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1) {
            return false;
        }

        int add = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                add += i;

                if (i != num / i) {
                    add += num / i;
                }
            }
        }

        return add == num;
    }
};