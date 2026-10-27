class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>um;
        for(int i=0;i<list1.size();i++){
            um[list1[i]]=i;
        }
        vector<string>res;
        int count=INT_MAX;
        for(int i=0;i<list2.size();i++){
            if(um.find(list2[i])!=um.end()){
                int j=um[list2[i]];
                if(count>i+j){
                    res.clear();
                    count=i+j;
                    res.push_back(list2[i]);
                }
                else if(count==i+j){
                    res.push_back(list2[i]);
                }
            }
        }
        return res;
    }
};