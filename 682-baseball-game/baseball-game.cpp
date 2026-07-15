class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int>stk;
        for(string i : operations){
            
           if (i == "+") {
                int first = stk.top();
                stk.pop();

                int second = stk.top();

                stk.push(first);         
                stk.push(first + second);

            }
            else if (i == "D") {
                stk.push(2 * stk.top());
            }
            else if (i == "C") {
                stk.pop();
            }
            else {
                stk.push(stoi(i));
            }
        }
        int total=0;
        while(!stk.empty()){
            total+=stk.top();
            stk.pop();
        }
        return total;
    }
};