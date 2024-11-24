class Solution
{
public:
    string convert(string s, int numRows)
    {
        // If only one row or the string length is less than rows, return the string as is
        if (numRows == 1)
            return s;

        string res = "";                   // Resultant zigzag string
        int increment = 2 * (numRows - 1); // Full cycle length

        // Loop through each row
        for (int i = 0; i < numRows; i++)
        {
            for (int j = i; j < s.length(); j += increment)
            {
                res += s[j]; // Add character for the current row

                // Check and add the middle character for non-first and non-last rows
                if (i > 0 && i < numRows - 1)
                {
                    int midCharIndex = j + increment - 2 * i;
                    if (midCharIndex < s.length())
                    {
                        res += s[midCharIndex];
                    }
                }
            }
        }
        return res; // Return the final zigzag string
    }
};
