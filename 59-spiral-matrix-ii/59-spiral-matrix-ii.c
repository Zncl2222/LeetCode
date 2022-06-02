

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes){
    
    int** res = (int**)malloc(n*sizeof(int*));
    *returnSize = n;
    *returnColumnSizes = (int*)malloc(n*sizeof(int));
    
    for(int i = 0; i < n; i++){
        
        res[i] = (int*)malloc(n*sizeof(int));
        (*returnColumnSizes)[i] = n;    
    }
    
    int curr = 1, up = 0, down = n - 1, right = n - 1, left = 0;

    
    while(curr <= n * n){
        
        for(int i = up; i <= right; i++){
            
            res[up][i] = curr;
            curr++;
        }
        up++;
        
        for(int i = up; i <= down; i++){
            
            res[i][right] = curr;
            curr++;
        }
        right--;
        
        for(int i = right; i >= left; i--){
            
            res[down][i] = curr;
            curr++;
        }
        down--;
        
        for(int i = down; i >= up; i--){
            
            res[i][left] = curr;
            curr++;
        }
        left++;
        
    }
    
    return res;

}