class Solution {
public:
    int countSubstrings(string s) {
        if(s.size()==1) return 1;
        int count=0;
        
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                string a=s.substr(i,j-i+1);
                string b=s.substr(i,j-i+1);
                reverse(a.begin(),a.end());
                if(a==b) count++;

            }
        }
        return count;
    }
};