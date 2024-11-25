class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxArea = 0;
        int i = 0;
        int j = height.size() - 1;
        while (i < j)
        {
            int width = j - i;
            int newHeight = min(height[i], height[j]);
            int area = width * newHeight;
            maxArea = max(maxArea, area);
            if (height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxArea;
    }
};