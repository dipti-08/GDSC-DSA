class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int row = size(matrix),col = size(matrix[0]);
        for(int i=0;i<row;i++)
        {
            if(target >= matrix[i][0] && target <= matrix[i][col-1])
            {
                for(int j=0;j<col;j++)
                {
                    if(target == matrix[i][j])
                    {
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
    }
};
