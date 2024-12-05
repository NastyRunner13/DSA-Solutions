class Solution
{
public:
    int minimumMoves(string s)
    {
        int moves = 0;
        int i = 0;
        while (i < s.length())
        {
            if (s[i] == 'X')
            {
                s[i] = 'O';
                moves++;
                i += 3;
            }
            else
            {
                i++;
            }
        }

        return moves;
    }
};