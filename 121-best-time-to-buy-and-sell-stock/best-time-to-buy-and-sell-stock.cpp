class Solution {
public:
    int maxProfit(vector<int>& prices) {  
        int low=0;
        int res=0;
        for(int i=1;i<prices.size();i++){
            if(prices[low]>prices[i]){
                low=i;
            }
            else{
                if(prices[i]-prices[low]>res){
                    res=prices[i]-prices[low];
                }
            }
        }
        return res;
       
    }
};