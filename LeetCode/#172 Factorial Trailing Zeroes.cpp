class Solution
{
public:
    int trailingZeroes(int n)
    {
        int count = 0;
        // Loop to count factors of 5, 25, 125, etc.
        for (int i = 5; n / i >= 1; i *= 5)
        {
            count += n / i;
        }
        return count;
    }
};