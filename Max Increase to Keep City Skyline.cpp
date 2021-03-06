class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
      if(grid.empty())return 0;
        
      int m = grid.size(), n = grid[0].size(), res = 0;
        
      vector<int> row(m, 0);
      vector<int> col(n, 0); 
        
      for(int i = 0;i < m; i++){
          for(int j = 0; j < n; j++){
              row[i] = max(row[i], grid[i][j]);
          }
      }
        for(int i = 0;i < n; i++){
          for(int j = 0; j < m; j++){
              col[i] = max(col[i], grid[j][i]);
          }
      }
      for(int i = 0;i < m; i++){
          for(int j = 0; j < n; j++){
              res += (min(row[i], col[j]) - grid[i][j]);
          }
      }
        return res;
    }
};
