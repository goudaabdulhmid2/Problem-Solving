class Solution
{
public:
    bool isPalindrome(string s)
    {

        string fillter = "";

        for (char c : s)
        {
            if (isalnum(c))
                fillter += tolower(c);
        }

        int l = 0, r = fillter.length() - 1;

        while (l < r)
        {
            if (fillter[l] != fillter[r])
                return false;
            l++;
            r--;
        }

        return true;
    }
};