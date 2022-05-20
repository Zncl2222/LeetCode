class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row_size=matrix.size();
        int col_size=matrix[0].size();
        
        int curr_row = 0, curr_col = col_size - 1;
        
        while(curr_row < row_size && curr_col > -1){
            
            if(matrix[curr_row][curr_col] == target)
                return true;
            
            if(target > matrix[curr_row][curr_col])
                curr_row++;
            else
                curr_col--;
            
        }
        
        return false;
    }
};