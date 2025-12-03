class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {

        set<vector<int>> v;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < nums.size(); j++)
            {

                int l = j + 1;
                int r = nums.size() - 1;

                while (l < r)
                {
                    long long sum = (long long)nums[i] + nums[j] + nums[l] + nums[r];
                    if (sum < target)
                        l++;
                    else if (sum > target)
                        r--;
                    else
                    {
                        v.insert({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;
                    }
                }
            }
        }

        vector<vector<int>> v2(v.begin(), v.end());

        return v2;
    }
};