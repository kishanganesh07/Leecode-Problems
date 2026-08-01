class Solution {
public:
    static bool function(vector<int>&a,vector<int>&b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),function);
        int ans=0;
        for(auto a:boxTypes){
            int x=min(a[0],truckSize);
            ans+=(x*a[1]);
            truckSize-=x;
             if(!truckSize) break; 
        }
        return ans;
        
    }
};