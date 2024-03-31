class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        rows = len(matrix)
        cols = len(matrix[0])
        zero_rows = set()
        zero_cols = set()
        
    
        for i in range(rows):
            for j in range(cols):
                if matrix[i][j] == 0:
                    zero_rows.add(i)
                    zero_cols.add(j)
        
        # Set zeros in rows
        for i in zero_rows:
            for j in range(cols):
                matrix[i][j] = 0
        
        # Set zeros in columns
        for j in zero_cols:
            for i in range(rows):
                matrix[i][j] = 0