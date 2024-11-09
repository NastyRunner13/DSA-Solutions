class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> ul;

        // Loop through each element in the vector nums
        for (int i = 0; i < nums.size(); i++)
        {
            // Check if the current element is already in the set
            if (ul.count(nums[i]) > 0)
            {
                return true;
            }
            ul.insert(nums[i]);
        }

        return false;
    }
};
