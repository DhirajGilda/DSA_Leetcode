class Solution {
public:
    void bfs(vector<vector<char>>& grid , int row,int col,vector<vector<bool>> &visited)  {
        visited[row][col]=true;
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        q.push({row,col});
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            
            vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
            
            for (const auto dir : directions) {
                int nr = r + dir.first;
                int nc = c + dir.second;
                
                if (nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] == '1' && !visited[nr][nc]) {
                    q.push({nr, nc});
                    visited[nr][nc] = true;
                }
            }
        }
      

    }
    void dfs(vector<vector<char>>& grid , int row,int col,vector<vector<bool>> &visited)
    {
        int n=grid.size();
        int m=grid[0].size();
        visited[row][col]=true;
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for(auto dir:directions){
            int nr=row+dir.first;
            int nc=col+dir.second;

            if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]=='1' && !visited[nr][nc]){
                dfs(grid,nr,nc,visited);
            }
        }


    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    dfs(grid,i,j,visited);
                    cnt++;
                }
            }
        }
        return cnt;
       
    }
};

