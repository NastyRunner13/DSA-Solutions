class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_set<int> seen_numbers;

        while (n != 1)
        {
            // Check if n is already in the set (cycle detection)
            if (seen_numbers.find(n) != seen_numbers.end())
            {
                return false; // Cycle detected, so not a happy number
            }

            // Add n to the set
            seen_numbers.insert(n);

            // Calculate the sum of the squares of the digits
            int sum = 0;
            while (n > 0)
            {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }

            n = sum; // Update n to be the sum of squares
        }
        return true;
    }
};