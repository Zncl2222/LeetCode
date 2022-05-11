

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
void fill_traverse(int** image, int row_size, int col_size, int sr, int sc, int origin_color, int newColor){
    
    if(sr<0 || sr>=row_size || sc<0 || sc>=col_size || image[sr][sc]!=origin_color || image[sr][sc]==newColor)
        return 0;
    
    image[sr][sc]=newColor;
    
    fill_traverse(image, row_size, col_size, sr+1, sc, origin_color, newColor);
    fill_traverse(image, row_size, col_size, sr, sc+1, origin_color, newColor);
    fill_traverse(image, row_size, col_size, sr-1, sc, origin_color, newColor);
    fill_traverse(image, row_size, col_size, sr, sc-1, origin_color, newColor);     
}


int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int newColor, int* returnSize, int** returnColumnSizes){
        
    *returnSize=imageSize;
    *returnColumnSizes=imageColSize;
    
    fill_traverse(image, imageSize, imageColSize[0], sr, sc, image[sr][sc] ,newColor);

    return image;
}