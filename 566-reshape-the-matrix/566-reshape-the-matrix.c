

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes){
    
    int matCol = matColSize[0];
    
    if(matSize*matCol != r*c || (matSize==r && matCol==c)){
        
        *returnSize = matSize;
        *returnColumnSizes = matColSize;
        
        return mat;
        
    }
    
    *returnSize = r;
    *returnColumnSizes = (int*)malloc(r*sizeof(int));
    int** res = (int**)malloc(r*sizeof(int*));
    
    for (int i = 0; i<r; i++){
        
        res[i] = (int*)malloc(c*sizeof(int));
        (*returnColumnSizes)[i] = c;
        
    }
    
    for (int i = 0; i<r*c; i++){
        
        res[i/c][i%c] = mat[i/matCol][i%matCol];
        
    }
    
    return res;
}

