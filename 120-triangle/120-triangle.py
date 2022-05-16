class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        
        row_size = len(triangle)
        
        for i in range(row_size - 2, -1, -1):

            col_size = len(triangle[i])

            for j in range (col_size):
                
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1])
                
        return triangle[0][0]