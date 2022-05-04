

bool isValidSudoku(char** board, int boardSize, int* boardColSize){
    
    int check_row[10]={0};
    int check_col[10]={0};
    int check_mat[10]={0};
    
    int index=0;
    
    //Case 1 check row
    for(int i=0;i<boardSize;i++){
        
        for (int j=0;j<boardColSize[0];j++){
            
            if(board[i][j]!='.'){
                index=board[i][j] - '0';
                check_row[index]++;
            }
            
            if (check_row[index]>1)
                return false;       
        }      
        
        memset(check_row,0,sizeof(int)*10);      
    }

    //Case 2 check column
    
    for(int i=0;i<boardColSize[0];i++){
        
        for (int j=0;j<boardSize;j++){
            
            if(board[j][i]!='.'){
                index=board[j][i] - '0';
                check_col[index]++;
            }
            
            if (check_col[index]>1)
                return false;
        }
        
        memset(check_col,0,sizeof(int)*10);
    }
    
    //Case 3 check mat
    int curr_row=0, curr_col=0;
    
    while(curr_row != boardSize){
        
        for (int i=0;i<3;i++){
            
            for(int j=0;j<3;j++){
                
                if(board[curr_row+i][curr_col+j]!='.'){
                    index=board[curr_row+i][curr_col+j]-'0';
                    check_mat[index]++;
                }
                
                if (check_mat[index]>1)
                    return false;
            }
        }
        
        curr_col+=3;
        
        if(curr_col>=9){
            
            curr_col=0;
            curr_row+=3;
        }
        
        memset(check_mat,0,sizeof(int)*10);
    }
      
    return true;
}