class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int maxma = *max_element(nums.begin(), nums.end());
        int count = 0;

        unordered_map<int, int> m;

        for (int num : nums)
            m[num] = 1;

        for (int i = 1; i <= maxma; i++)
        {
            if (m[i] == 0)
            {
                count = i;
                break;
            }
        }

        if (count <= 0 && maxma < 0)
            return 1;
        else if (count > 0)
            return count;
        else
            return maxma + 1;
    }
};