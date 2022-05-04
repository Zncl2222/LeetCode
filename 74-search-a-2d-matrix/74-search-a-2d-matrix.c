bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){

    int matCol_size=matrixColSize[0];
    int target_row=0;
    
    for (int i=0;i<matrixSize-1;i++){
        
        if(target>=matrix[target_row][0] && target<=matrix[target_row][matCol_size-1])
            break;
        else
            target_row++;
            
        if (target_row>matrixSize)
            return false; 
    }

    for(int i=0;i<matCol_size;i++){

        if(matrix[target_row][i]==target)
            return true;
        
    }
       
    return false;
    
}