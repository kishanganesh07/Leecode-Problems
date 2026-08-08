class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        queue<vector<int>>q;
        int count=0;
      int m = grid[0].size(); 
      for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
            if(grid[i][j]==2){
                q.push({i,j,0});
            }
        }
      }
      while(!q.empty()){
        vector<int>r=q.front();
        q.pop();
        count = r[2];
        int row=r[0];
        int col=r[1];
        if(col+1<grid[0].size()){
            if(grid[row][col+1]==1){
            q.push({row,col+1,r[2]+1});
            grid[row][col+1]=2;
        }
        }
        if(row+1<grid.size()){
              if(grid[row+1][col]==1){
            q.push({row+1,col,r[2]+1});
            grid[row+1][col]=2;
        }
        }
         if(row-1>=0){
              if(grid[row-1][col]==1){
            q.push({row-1,col,r[2]+1});
            grid[row-1][col]=2;
        }
        }
        if(col-1>=0){
              if(grid[row][col-1]==1){
            q.push({row,col-1,r[2]+1});
            grid[row][col-1]=2;
        }
        }
       
      }

      for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
            if(grid[i][j]==1){
                return -1;
            }
        }
      }

      return count;
      
    }
};