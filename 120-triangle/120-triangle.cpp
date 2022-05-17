# define MIN(a,b) (a<b?a:b)

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int row_size = triangle.size();
        int col_size;
        
        for(int i = row_size - 2; i >= 0; i--){
            
            col_size = triangle[i].size();
            
            for(int j = 0; j < col_size; j++){
                
                triangle[i][j] += MIN(triangle[i+1][j], triangle[i+1][j+1]);
            }
            
        }
        
        return triangle[0][0];
    }
};