class Solution {
public:
    int mark(vector<vector<int>>& grid,int r, int c){
        if(r<0||r>=grid.size()||c<0||c>=grid[0].size()|| grid[r][c] != 1){
            return 0; 
        }
        grid[r][c] = 0;
        return (1+ mark(grid,r,c+1)+ mark(grid,r,c-1) + mark(grid,r-1,c) +mark(grid,r+1,c));
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int count=0;
        int sum = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    sum = max(mark(grid,i,j),sum);
                    count++;
                }
            }
        }
        return sum;
    }
};