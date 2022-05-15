

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

int C_comb(int n, int k){
    
    if(k == 1)
        return n;
    
    return (n * C_comb(n-1, k-1) / k);      
}

void back_tracking(int** res, int* record, int n, int k, int count, int* idx, int start){
    
    if(count == k){

        memcpy(res[(*idx)++], record, k*sizeof(int));       
    }   
    else{
        
        for(int i = start; i <= n; i++){
            
            record[count] = i;
            back_tracking(res, record, n, k, count+1, idx, i+1);
        }   
    }
}

int** combine(int n, int k, int* returnSize, int** returnColumnSizes){
  
    int row_size = C_comb(n,k);
    
    int** res = (int**)malloc(row_size*sizeof(int*));
    int* col_size = (int*)malloc(row_size*sizeof(int));
    int* record = (int*)calloc(k, sizeof(int));
    
    for(int i = 0; i < row_size; i++){
        
        res[i] = (int*)malloc(k*sizeof(int));
        col_size[i] = k;
    }
    
    *returnSize = row_size;
    *returnColumnSizes = col_size;
    
    int idx = 0;
    
    back_tracking(res, record, n, k, 0, &idx, 1);
    
    return res;

}