class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int result = 0;
        int prevValue = 0;

        for (int i = s.length() - 1; i >= 0; i--)
        {
            int currentValue = romanMap[s[i]]; // Get the integer value of the current Roman numeral

            if (currentValue < prevValue)
            {
                result -= currentValue; // Subtract if it's part of a subtractive pair
            }
            else
            {
                result += currentValue; // Add otherwise
            }

            prevValue = currentValue; // Update the previous value
        }
        return result;
    }
};