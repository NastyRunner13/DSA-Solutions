class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long low = 0;
        long long high = n;
        while (low <= high)
        {
            long long mid = low + (high - low) / 2;
            long long coinUsed = ((mid) * (mid + 1)) / 2;
            if (coinUsed == n)
            {
                return (int)mid;
            }
            else if (coinUsed < n)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return (int)high;
    }
};