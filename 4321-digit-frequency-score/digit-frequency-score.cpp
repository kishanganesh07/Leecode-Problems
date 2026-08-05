class Solution {
public:
    int digitFrequencyScore(int n) {
        int res=0;
        unordered_map<int,int>um;
        int temp=n;
        while(temp!=0){
            int a=temp%10;
            um[a]++;
            temp/=10;
        }
        for(auto i : um){
            res+=i.first*i.second;
        }
        return res;
    }
};