class Solution
{
public:
    int maximum69Number(int num)
    {
        string str_num = to_string(num);
        for (char &digit : str_num)
        {
            if (digit == '6')
            {
                digit = '9';
                break;
            }
        }
        return stoi(str_num);
    }
};