class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> prefix(nums.size() + 1, 1), postfix(nums.size() + 2, 1), result;

        for (int i = 1; i <= nums.size(); i++)
        {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        for (int i = nums.size(); i >= 1; i--)
        {
            postfix[i] = postfix[i + 1] * nums[i - 1];
        }

        for (int i = 1; i <= nums.size(); i++)
        {
            int res = postfix[i + 1] * prefix[i - 1];

            result.push_back(res);
        }

        return result;

        return postfix;
    }
};