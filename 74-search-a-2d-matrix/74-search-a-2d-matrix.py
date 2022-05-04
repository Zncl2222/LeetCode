class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        row_size=len(matrix)
        col_size=len(matrix[0])
        
        for i in range(row_size):
            
            if matrix[i].count(target)>=1:
                
                return True
            
        return False