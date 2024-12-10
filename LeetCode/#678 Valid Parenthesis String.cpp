class Solution
{
public:
    bool checkValidString(string s)
    {
        int min_count = 0;
        int max_count = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                min_count++;
                max_count++;
            }
            else if (c == ')')
            {
                min_count = max(0, min_count - 1);
                max_count--;
            }
            else if (c == '*')
            {
                min_count = max(0, min_count - 1);
                max_count++;
            }
            if (max_count < 0)
            {
                return false;
            }
        }
        return min_count == 0;
    }
};