class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        primary = 0
        secondary = 0
        if len(mat) % 2 == 0:
            for i, _ in enumerate(mat):
                primary += mat[i][i]
                secondary += mat[len(mat) - i - 1][i]
        else:
            for i, _ in enumerate(mat):
                primary += mat[i][i]
                if i == (len(mat) - 1) / 2:
                    continue
                secondary += mat[len(mat) - i - 1][i]
                
        return primary + secondary
            