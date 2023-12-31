class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
          if(grid.size()==0) return 0;
        int ans=0;
        int n= grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    if(i==0 || grid[i-1][j]==0 ) ans++; //when grid at left
                    if(j==0 || grid[i][j-1]==0 ) ans++; //when grid at top
                    if(j==m-1 || grid[i][j+1]==0 ) ans++; //when grid at right
                    if(i==n-1 || grid[i+1][j]==0 ) ans++;//when grid at bottom
                }
            }
        }
        return ans;
    }
};
