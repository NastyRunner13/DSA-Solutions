class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (divisor == 0)
            return INT_MAX; // Division by zero (undefined)
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX; // Overflow case

        // Determine the sign of the result
        bool isNegative = (dividend < 0) ^ (divisor < 0);

        // Convert to positive values
        long long absDividend = abs((long long)dividend);
        long long absDivisor = abs((long long)divisor);

        long long result = 0;

        // Perform bit manipulation
        while (absDividend >= absDivisor)
        {
            long long tempDivisor = absDivisor, multiple = 1;
            while (absDividend >= (tempDivisor << 1))
            {
                tempDivisor <<= 1;
                multiple <<= 1;
            }
            absDividend -= tempDivisor;
            result += multiple;
        }

        // Apply the sign to the result
        result = isNegative ? -result : result;

        // Clamp result within 32-bit signed integer range
        return result > INT_MAX ? INT_MAX : result < INT_MIN ? INT_MIN
                                                             : result;
    }
};