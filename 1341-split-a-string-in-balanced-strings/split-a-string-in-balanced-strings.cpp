class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int l=0;
        int r=0;
        for(auto i : s){
            if(i=='L'){
                l++;
            }
            else if(i=='R'){
                r++;
            }
            if((l!=0 || r!=0)&& (l==r)){
                count++;
                l=0;
                r=0;
            }
        }
        return count;
        
    }
};