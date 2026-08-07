class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int judge=-1111;
        vector<vector<int>>res(n+1);
        for(int i=0;i<trust.size();i++){
            res[trust[i][0]].push_back(trust[i][1]);
        }
        for(int i=1;i<res.size();i++){
            if(res[i].size()==0){
                judge=i;
                break;
            }
        }
        for(int i=1;i<res.size();i++){
            if(i!=judge){
                int j=0;
                for(;j<res[i].size();j++){
                    if(res[i][j]==judge) {
                        break;
                    }
                }
                if (j==res[i].size())
                return -1;
            }
        }
        return judge;
    }
};