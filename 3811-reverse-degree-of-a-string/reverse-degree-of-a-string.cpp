class Solution {
public:
    int reverseDegree(string s) {
        int res=0;
        for(int  i=0;i<s.size();i++){
            char c=s[i];
            int a=26-(c-'a');
            
            res+=a*(i+1);

        }
        return res;
    }
};