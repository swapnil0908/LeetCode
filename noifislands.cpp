class Solution {
public:
    void mark(vector<vector<char> >& grid, int r, int c){
    if ( r<0 || r>=grid.size() || c<0 || c>=grid[0].size() || grid[r][c] != '1' ) {
        return;
    }

    grid[r][c] = '0';

    //left
    mark(grid, r, c+1);
    //right
    mark(grid, r, c-1);
    //up
    mark(grid, r-1, c);
    //down
    mark(grid, r+1, c);
    
    //mark(grid, r-1, c+1);
    //mark(grid, r-1, c-1);
        
    //mark(grid, r+1, c+1);
    //mark(grid, r+1, c-1);
}

    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int r=0;r<grid.size();r++){
            for(int c=0;c<grid[r].size();c++){
                if(grid[r][c] == '1'){
                    mark(grid, r, c);
                    count++;
                }
                
            }
            
        }
        return count;
    }
};