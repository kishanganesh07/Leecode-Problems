class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
            int t=1;

        while(q.size()!=1){
            if(t==k){
                q.pop();
                t=1;
            }
            else{
                int front=q.front();
                q.pop();
                q.push(front);
                t++;
            }
        }
        return q.front();
    }
};