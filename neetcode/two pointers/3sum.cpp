class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        set<vector<int>> v;

        for (int i = 0; i < nums.size(); i++)
        {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            if (nums[i] > 0)
                break;
            int l = i + 1;
            int r = nums.size() - 1;

            while (l < r)
            {
                if ((nums[l] + nums[r]) < -nums[i])
                    l++;
                else if (nums[l] + nums[r] > -nums[i])
                    r--;
                else
                {
                    v.insert({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                }
            }
        }

        vector<vector<int>> v2(v.begin(), v.end());

        return v2;
    }
};