class Solution
{
public:
    bool canEat(vector<int> piles, int k, int h)
    {
        int totalHours = 0;
        for (int pile : piles)
        {
            totalHours += (pile + k - 1) / k;
            if (totalHours > h)
            {
                return false;
            }
        }
        return true;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if (canEat(piles, mid, h))
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};