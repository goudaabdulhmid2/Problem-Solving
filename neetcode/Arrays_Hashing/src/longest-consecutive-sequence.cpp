class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> s;

        for (int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }

        int ctr, maxma = 0;

        for (auto x : s)
        {
            if (s.find(x - 1) == s.end())
            {
                ctr = 1;
                while (s.find(++x) != s.end())
                {
                    ctr++;
                }
                maxma = max(ctr, maxma);
            }
        }

        return maxma;
    }
};