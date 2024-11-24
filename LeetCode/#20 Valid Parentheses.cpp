class Solution
{
public:
    bool isValid(string s)
    {
        unordered_map<char, char> bracketPairs = {
            {')', '('},
            {'}', '{'},
            {']', '['},
        };

        stack<char> st;

        for (char c : s)
        {
            if (bracketPairs.count(c))
            {
                if (!st.empty() && st.top() == bracketPairs[c])
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                st.push(c);
            }
        }

        return st.empty();
    }
};