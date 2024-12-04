class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int r = 0, l = 0, max = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'R')
            {
                r++;
            }
            else if (s[i] == 'L')
            {
                l++;
            }
            if (l == r)
            {
                max++;
                l = 0;
                r = 0;
            }
        }
        return max;
    }
};