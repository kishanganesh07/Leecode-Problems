class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for (auto i : operations){
            if("++X"==i){
                ++x;
            }
            else if("X++"==i){
                x++;
            }
            else if("--X"==i){
                --x;
            }
            else if("X--"==i){
                x--;
            }

        }
        return x;

    }
};