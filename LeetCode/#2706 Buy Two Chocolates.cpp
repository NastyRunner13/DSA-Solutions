class Solution
{
public:
    int buyChoco(vector<int> &prices, int money)
    {
        int mini1 = INT_MAX, mini2 = INT_MAX;
        for (int price : prices)
        {
            if (price < mini1)
            {
                mini2 = mini1;
                mini1 = price;
            }
            else if (price < mini2)
            {
                mini2 = price;
            }
        }

        int moneyleft = money - (mini1 + mini2);
        return moneyleft >= 0 ? moneyleft : money;
    }
};