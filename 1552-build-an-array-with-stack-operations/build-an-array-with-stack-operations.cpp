class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>res;
        stack<int>stk;
        int num = 1;
        while(stk.size() != target.size()){
            int top = num;
            if(find(target.begin(),target.end(),top) != target.end()){
                stk.push(top);
                res.push_back("Push");
            }
            else{
                stk.push(top);
                res.push_back("Push");
                stk.pop();
                res.push_back("Pop");

            }
            num++;
        }
        return res;
    }
};