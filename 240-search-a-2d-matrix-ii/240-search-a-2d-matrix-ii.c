
bool search(int** matrix, int row_size, int col_size, int sr, int sc, int target){
    
    
    if(sr < 0 || sr >= row_size || sc < 0 || sc >= col_size)
        return false;
    
    if(target == matrix[sr][sc])
        return true;
    
    if (target > matrix[sr][sc])
        return search(matrix, row_size, col_size, sr+1, sc ,target);
    
    else
        return search(matrix, row_size, col_size, sr, sc-1, target);
    
}


bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    
    if(matrixSize == 1 && *matrixColSize == 1){
        
        if(target == matrix[0][0])
            return true;
        else
            return false;
    }
    
    return search(matrix, matrixSize, *matrixColSize, 0, *matrixColSize-1, target);
}