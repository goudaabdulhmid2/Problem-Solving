class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        long long mxma = 0;

        int l = 0;
        int r = height.size() - 1;
        while (l < r)
        {
            long long res = min(height[l], height[r]) * ((r + 1) - (l + 1));
            mxma = max(res, mxma);

            if (height[l] > height[r])
                r--;
            else
                l++;
        }

        return mxma;
    }
};