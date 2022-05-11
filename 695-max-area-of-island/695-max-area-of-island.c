#define MAX(a,b) (a>b?a:b)

int DFS(int** grid, int row_size, int col_size, int sr, int sc, int** visited){
    
    if(sr<0 || sr>=row_size || sc<0 || sc>=col_size || visited[sr][sc]==1 || grid[sr][sc]==0)
        return 0;
    
    visited[sr][sc]=1;
    
    int left, right, up , down;
    
    left=DFS(grid, row_size, col_size, sr, sc-1, visited);
    right=DFS(grid, row_size, col_size, sr, sc+1, visited);
    up=DFS(grid, row_size, col_size, sr+1, sc, visited);
    down=DFS(grid, row_size, col_size, sr-1, sc, visited);
    
    return (left+right+up+down+1);
}

int maxAreaOfIsland(int** grid, int gridSize, int* gridColSize){
    
    int** visited=(int**)malloc(gridSize*sizeof(int*));
    int curr_area, max_area=0;
    
    for(int i=0; i<gridSize; i++){
        
        visited[i]=(int*)calloc(gridColSize[0],sizeof(int));
    }
    
    for(int i=0; i<gridSize; i++){
        
        for(int j=0; j<gridColSize[0]; j++){
            
            curr_area=DFS(grid, gridSize, gridColSize[0], i, j, visited);
            max_area=MAX(max_area,curr_area);
        }
    }
    
    return max_area;
}