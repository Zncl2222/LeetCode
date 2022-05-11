class Solution {
public:
    
    int Traverse(vector<vector<int>>& grid, int sr, int sc, vector<vector<int>>& visited){
        
        if(sr<0 || sc<0 || sr>=grid.size() || sc>=grid[0].size() || visited[sr][sc]==1 || grid[sr][sc]==0)
            return 0;
        
        visited[sr][sc]=1;
        
        int up=Traverse(grid, sr+1, sc, visited);
        int down=Traverse(grid, sr-1, sc, visited);
        int right=Traverse(grid, sr, sc+1, visited);
        int left=Traverse(grid, sr, sc-1, visited);
        
        return (up+down+right+left)+1;
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int row_size=grid.size();
        int col_size=grid[0].size();
        
        vector<vector<int>> visited(row_size,vector<int>(col_size));
        
        int curr_area, max_area=0;
        
        
        for(int i=0; i<row_size; i++){
            
            for(int j=0; j<col_size; j++){
                
                curr_area=Traverse(grid, i, j, visited);
                max_area=max(curr_area, max_area);
            }
        }
        
        return max_area;
        
    }
};