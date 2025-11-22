class NumMatrix
{
    vector<vector<int>> prefix2D;

public:
    NumMatrix(vector<vector<int>> &matrix)
    {

        // raw
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 1; j < matrix[0].size(); j++)
            {
                matrix[i][j] += matrix[i][j - 1];
            }
        }

        for (int i = 0; i < matrix[0].size(); i++)
        {
            for (int j = 1; j < matrix.size(); j++)
            {
                matrix[j][i] += matrix[j - 1][i];
            }
        }

        prefix2D = matrix;
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {

        int res = prefix2D[row2][col2];

        if (col1 > 0)
            res -= prefix2D[row2][col1 - 1];
        if (row1 > 0)
            res -= prefix2D[row1 - 1][col2];
        if (row1 > 0 && col1 > 0)
            res += prefix2D[row1 - 1][col1 - 1];

        return res;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */