class Solution
{
public:
    void merges(vector<int> &nums, int left, int mid, int right)
    {
        vector<int> tmp;
        int i = left;
        int j = mid + 1;

        while (i <= mid && j <= right)
        {
            if (nums[i] < nums[j])
                tmp.push_back(nums[i++]);
            else
                tmp.push_back(nums[j++]);
        }

        while (i <= mid)
            tmp.push_back(nums[i++]);
        while (j <= right)
            tmp.push_back(nums[j++]);

        for (int k = 0; k < tmp.size(); k++)
        {
            nums[left + k] = tmp[k];
        }
    }

    void mergeSort(vector<int> &nums, int left, int right)
    {

        if (left >= right)
            return;

        int mid = (left + right) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);

        merges(nums, left, mid, right);
    }

    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        for (int i = m, j = 0; i < m + n; i++, j++)
        {
            nums1[i] = nums2[j];
        }

        mergeSort(nums1, 0, nums1.size() - 1);
    }
};