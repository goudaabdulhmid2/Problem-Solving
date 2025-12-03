class Solution
{
public:
    void addTheRest(string &s, string word, int start, int end)
    {
        for (; start < end; start++)
        {
            s += word[start];
        }
    }
    string mergeAlternately(string word1, string word2)
    {
        string newStr = "";

        for (int i = 0; i < min(word1.length(), word2.length()); i++)
        {
            newStr += word1[i];
            newStr += word2[i];
        }

        if (word1.length() > word2.length())
        {
            addTheRest(newStr, word1, word2.length(), word1.length());
        }
        else if (word1.length() < word2.length())
            addTheRest(newStr, word2, word1.length(), word2.length());

        return newStr;
    }
};