class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = k % nums.size();

        reverse(nums.begin(), nums.end());

        reverse(nums.begin() + n, nums.end());
        reverse(nums.begin(), nums.begin() + n);
    }
};