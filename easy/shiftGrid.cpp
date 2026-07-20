class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        int total = m * n;
        k %= total;

        vector<vector<int>> ans(m, vector<int>(n));

        for (int i =0;i< m; i++){
            for(int j = 0; j< n;j++){

                //index in 1D arrary (before the rotation)
                int oldIndex = i * n +j;

                //index in 1D arrary (after the rotation)
                int newIndex = (oldIndex + k)%total;

                //changing from 1d back to 2d

                int newRow = newIndex /n;
                int newCol = newIndex% n;
                ans[newRow][newCol] = grid[i][j];
            }
        }
        return ans;
        
    }
};