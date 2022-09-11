class Solution {
     void bfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>>& grid){
         vis[row][col] = 1;
         queue<pair<int,int>> q;
         q.push({row , col});
         int n=grid.size(),m=grid[0].size();
         
         while(!q.empty()){
             int row = q.front().first;
             int col = q.front().second;
             q.pop();
             for(int delr = -1; delr <= 1; delr++){
                 
                     int nrow = row + delr;
                     int ncol = col ;
                     if( nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                      !vis[nrow][ncol] && grid[nrow][ncol] == '1' ){
                         q.push({nrow , ncol});
                         vis[nrow][ncol] = 1;
                     }
                 }
             
              for(int delc = -1 ; delc <= 1; delc++ ){
                     int nrow = row ;
                     int ncol = col + delc;
                     if( nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                      !vis[nrow][ncol] && grid[nrow][ncol] == '1' ){
                         q.push({nrow , ncol});
                         vis[nrow][ncol] = 1;
                     }
                 }
             
             
         }
         
         
         
     }
    
    
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int cnt=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    cnt++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return cnt;
    }
};