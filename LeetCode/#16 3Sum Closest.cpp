class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int difference = INT_MAX;
        int ans = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target)
                {
                    return target;
                }
                else if (abs(sum - target) < difference)
                {
                    difference = abs(sum - target);
                    ans = sum;
                }
                if (sum > target)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return ans;
    }
};