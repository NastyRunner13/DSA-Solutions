class Solution
{
public:
    bool canSplit(vector<int> &nums, int maxSum, int k)
    {
        int currentSum = 0;
        int subarr = 1;
        for (int num : nums)
        {
            if (currentSum + num > maxSum)
            {
                subarr++;
                currentSum = num;
                if (subarr > k)
                    return false;
            }
            else
            {
                currentSum += num;
            }
        }
        return true;
    }

    int splitArray(vector<int> &nums, int k)
    {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (canSplit(nums, mid, k))
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};