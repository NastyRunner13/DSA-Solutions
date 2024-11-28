class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        int n = g.size();
        int m = s.size();
        int left = 0;
        int right = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while (right < m && left < n)
        {
            if (g[left] <= s[right])
            {
                left++;
            }
            right++;
        }
        return left;
    }
};