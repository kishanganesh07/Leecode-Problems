class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0) {
                bool canplant = true;
                if (i - 1 >= 0 && flowerbed[i - 1] == 1)
                    canplant = false;
                if (i + 1 < flowerbed.size() && flowerbed[i + 1] == 1)
                    canplant = false;
                if (canplant) {
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }
        return n <= 0;
    }
    };