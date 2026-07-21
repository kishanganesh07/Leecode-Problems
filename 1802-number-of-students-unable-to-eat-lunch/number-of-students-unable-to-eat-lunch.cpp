class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       queue<int>q1;
       queue<int>q2;
       for(int i=0;i<students.size();i++){
            q1.push(students[i]);
       }
       for(int i=0;i<sandwiches.size();i++){
            q2.push(sandwiches[i]);
       }
                int count=0;

       while(!q1.empty() && count<q1.size() ){
            if(q1.front()==q2.front()){
                q2.pop();
                q1.pop();
                count=0;
            }
            else{
                int front=q1.front();
                q1.pop();
                q1.push(front);
                count++;
            }
       }
       return q1.size();
    }
};