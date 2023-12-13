class Solution {
public:
void dfs(int i,int j,vector<vector<char>>& grid)
{
    int n = grid.size();
    int m = grid[0].size();
    if(i<0 || j<0 || i>=n || j>=m || grid[i][j] == '0' || grid[i][j] == '2') return;
    if(grid[i][j] == '1'){
            grid[i][j] = '2';
                dfs(i-1,j,grid);
                dfs(i+1,j,grid);
                dfs(i,j+1,grid);
                dfs(i,j-1,grid);
        }
        return;

}
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int ans=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='0' || grid[i][j]=='2') continue;
                if(grid[i][j]=='1')
                {
                    ans++;
                dfs(i-1,j,grid);
                dfs(i+1,j,grid);
                dfs(i,j+1,grid);
                dfs(i,j-1,grid);
             }
            }
        }
            return ans;
    }
};
