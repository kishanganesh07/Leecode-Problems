class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        queue<vector<int>> q;
        vector<vector<int>> visited(grid.size(),
        vector<int>(grid[0].size(), 0));
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1' && visited[i][j] == 0) {
                    count++;
                    q.push({i, j});
                    visited[i][j] == 1;
                    while (!q.empty()) {
                        auto temp = q.front();
                        q.pop();
                        int row = temp[0];
                        int col = temp[1];
                        if (row - 1 >= 0 && grid[row-1][col]=='1'&&visited[row-1][col]==0){
                            visited[row-1][col]=1;
                            q.push({row-1,col});
                        }
                         if (row+1<grid.size() && grid[row+1][col]=='1'&&visited[row+1][col]==0){
                            visited[row+1][col]=1;
                            q.push({row+1,col});
                        }
                        if (col+1<grid[0].size() && grid[row][col+1]=='1'&&visited[row][col+1]==0){
                            visited[row][col+1]=1;
                            q.push({row,col+1});
                        }
                        if (col - 1 >= 0 && grid[row][col-1]=='1'&&visited[row][col-1]==0){
                            visited[row][col-1]=1;
                            q.push({row,col-1});
                        }


                    }
                }
            }
        }
        return count;
    }
};