class Solution {
public:

    int gcd(int a, int b)
    {
        if(b == 0)
            return a;
        return gcd(max(a % b, b), min(a % b, b));
    }

    int maxLength(vector<int>& nums) {
        int n = nums.size();
        if(n == 2)
            return 2;
        long long pro, g, l;
        int ans = -1, res = -1;

        for(int i = 0; i < n - 1; i++)
        {
            pro = nums[i], g = gcd(nums[i], nums[i + 1]), ans = 1, l = nums[i] / g;
            for(int j = i + 1; j < n; j++)
            {
                l = (l * nums[j]) / gcd(l, nums[j]);
                pro = pro * nums[j];
                g = gcd(g, nums[j]);
                if(l * g == pro)
                {
                    ans++;
                    res = max(res, ans);
                }
                else
                    break;
            }
        }
        return res;
    }
};