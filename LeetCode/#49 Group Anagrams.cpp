class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        map<map<char, int>, vector<string>> anagramMap;

        for (string word : strs)
        {
            map<char, int> freqMap;
            for (char ch : word)
            {
                freqMap[ch]++;
            }
            anagramMap[freqMap].push_back(word);
        }

        vector<vector<string>> result;

        for (auto &entry : anagramMap)
        {
            result.push_back(entry.second); // Each entry.second is a vector of anagrams
        }
        return result;
    }
};