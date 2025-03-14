class Solution
{
public:
    string largestNumber(vector<int> &nums)
    {
        vector<string> str_nums;
        for (int num : nums)
        {
            str_nums.push_back(to_string(num));
        }

        sort(str_nums.begin(), str_nums.end(), [](const string &a, const string &b)
             { return a + b > b + a; });

        if (str_nums.empty() || str_nums[0] == "0")
        {
            return "0";
        }

        string result;
        for (const string &str : str_nums)
        {
            result += str;
        }

        return result;
    }
};