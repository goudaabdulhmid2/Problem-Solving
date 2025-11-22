function removeElement(nums: number[], val: number): number {

    let ct = 0, l = 0, r = nums.length - 1;

    while (l <= r) {
        if (nums[l] === val) {
            [nums[l], nums[r]] = [nums[r], nums[l]];
            ct++;
            r--;
        } else {
            l++;
        }
    }

    return nums.length - ct;
};