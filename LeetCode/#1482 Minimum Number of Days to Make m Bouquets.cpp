class Solution
{
public:
    bool possible(vector<int> days, int mid, int m, int k)
    {
        int count = 0;
        int noofb = 0;
        for (int day : days)
        {
            if (mid >= day)
            {
                count++;
            }
            else
            {
                noofb += count / k;
                count = 0;
            }
        }
        noofb += count / k;
        if (noofb >= m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        long long totalFlowers = (long long)m * k;
        if (bloomDay.size() < totalFlowers)
        {
            return -1;
        }
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if (possible(bloomDay, mid, m, k))
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