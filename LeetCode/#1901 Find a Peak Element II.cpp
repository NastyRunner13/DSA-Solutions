class Solution
{
public:
    int maxIndex(vector<vector<int>> &mat, int row, int col, int mid)
    {
        int index = -1;
        int maxElement = -1;
        for (int i = 0; i < row; i++)
        {
            if (mat[i][mid] > maxElement)
            {
                maxElement = mat[i][mid];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>> &mat)
    {
        int row = mat.size();
        int col = mat[0].size();
        int low = 0;
        int high = col - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int maxRow = maxIndex(mat, row, col, mid);

            int left = mid - 1 >= 0 ? mat[maxRow][mid - 1] : -1;
            int right = mid + 1 < col ? mat[maxRow][mid + 1] : -1;

            if (mat[maxRow][mid] > left && mat[maxRow][mid] > right)
            {
                return {maxRow, mid};
            }
            else if (mat[maxRow][mid] < left)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return {-1, -1};
    }
};