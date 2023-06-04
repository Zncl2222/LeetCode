bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    if(matrixSize == 0)
        return false;
    
    int col_size = matrixColSize[0];
    int target_row = 0;
    
    for(int i = 0; i < matrixSize; i++){
        if(matrix[i][col_size-1] < target)
            target_row++;
        else
            break;       
    }
    
    if(target_row > matrixSize-1)
        return false;
    
    for(int i = 0; i < col_size; i++){
        if(target == matrix[target_row][i])
            return true;  
    }
    
    return false;
}