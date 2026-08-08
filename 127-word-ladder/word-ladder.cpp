class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        vector<int>visited(wordList.size());
        while(!q.empty()){
            auto temp=q.front();
            
            q.pop();
            if(endWord==temp.first){
                return temp.second;
            }
            for(int i=0;i<wordList.size();i++){
                if(visited[i]==0){
                    int count=0;
                    for(int j=0;j<wordList[i].size();j++){
                        if(temp.first[j]==wordList[i][j]){
                            count++;
                        }
                    }
                    if(count==beginWord.size()-1){
                        q.push({wordList[i],temp.second+1});
                        visited[i]=1;
                    }
                }
            }
        }
        return 0;
    }
};