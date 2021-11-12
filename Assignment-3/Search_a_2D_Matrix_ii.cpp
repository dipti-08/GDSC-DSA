class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int i,j,row,col;
        bool flag = false;
        row = size(matrix);
        col = size(matrix[0]);
        i = j = 0;
        while(i<row || j<col)
        {
            if(i<row && target >= matrix[i][0] && target <= matrix[i][col-1])
            {
                for(int k=0;k<col;k++)
                {
                    if(target == matrix[i][k])
                    {
                        flag = true;
                        break;
                    }
                }
            }
            else if(j<col && target >= matrix[0][j] && target <= matrix[row-1][j])
            {
                for(int k=0;k<row;k++)
                {
                    if(target == matrix[k][j])
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if(flag)
            {
                break;
            }
            i++;
            j++;
        }
        return flag;
    }
};
