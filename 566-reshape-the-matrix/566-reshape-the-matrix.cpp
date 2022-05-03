class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int row_size=mat.size();
        int col_size=mat[0].size();
        
        if(row_size*col_size!=r*c)
            return mat;
        
        vector<vector<int>> res(r,vector<int>(c));
        
        for(int i=0; i<r*c;i++){
            
            res[i/c][i%c]=mat[i/col_size][i%col_size];
            
        }
        
        return res;
    }
};