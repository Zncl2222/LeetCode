

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    
    int** res=(int**)malloc(numRows*sizeof(int*));
    *returnColumnSizes = malloc(sizeof(int) * numRows);
    *returnSize=numRows;
		
    for(int i = 0; i<numRows; i++){
        
        res[i]=malloc((i+1)*sizeof(int));
        (*returnColumnSizes)[i] = i+1;
        
    }
    
    res[0][0]=1;
    
    for(int i = 1; i<numRows; i++){
        
        for (int j = 0; j<=i; j++){
            
            if(j==0||j==i)
                res[i][j]=res[i-1][0];
            else
                res[i][j]=res[i-1][j]+res[i-1][j-1];
            
        }
        
    }
       
    return res;
}