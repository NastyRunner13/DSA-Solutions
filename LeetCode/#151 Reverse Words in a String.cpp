class Solution
{
private:
    void trimSpaces(string &s)
    {
        // Remove leading spaces
        size_t start = s.find_first_not_of(' ');
        if (start == string::npos)
        {
            s = "";
            return;
        }

        // Remove trailing spaces
        size_t end = s.find_last_not_of(' ');
        s = s.substr(start, end - start + 1);
    }

    vector<string> splitWords(const string &s)
    {
        vector<string> words;
        istringstream iss(s);
        string word;
        while (iss >> word)
        {
            words.push_back(word);
        }
        return words;
    }

    string joinWords(const vector<string> &words)
    {
        string result;
        for (const auto &word : words)
        {
            if (!result.empty())
                result += " ";
            result += word;
        }
        return result;
    }

public:
    string reverseWords(string s)
    {
        trimSpaces(s);
        vector<string> words = splitWords(s);
        reverse(words.begin(), words.end());
        return joinWords(words);
    }
};