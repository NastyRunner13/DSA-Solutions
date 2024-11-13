class Solution
{
public:
    vector<string> phoneMap = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void backtrack(int index, string digits, string current, vector<string> &result)
    {
        if (index == digits.size())
        {
            result.push_back(current);
            return;
        }

        string letters = phoneMap[digits[index] - '0'];

        for (char letter : letters)
        {
            backtrack(index + 1, digits, current + letter, result);
        }
    }
    vector<string> letterCombinations(string digits)
    {
        vector<string> result;
        if (digits.empty())
            return result;
        backtrack(0, digits, "", result);
        return result;
    }
};