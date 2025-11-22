class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int nOfAppear = nums.size() / 3;
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++)
        {

            m[nums[i]]++;
        }

        vector<int> res;

        for (auto [key, value] : m)
        {
            if (value > nOfAppear)
                res.push_back(key);
        }

        return res;
    }
};