// Problem link: https://neetcode.io/problems/duplicate-integer
class ContainsDuplicate {
  /**
   * @param {number[]} nums
   * @return {boolean}
   */

  // Solution 1
  hasDuplicate1(nums: number[]): boolean {
    const seen = new Set();

    for (const num of nums) {
      if (seen.has(num)) {
        return true;
      }
      seen.add(num);
    }
    return false;
  }

  hasDuplicate2(nums: number[]): boolean {
    const freq: Record<string, number> = {};

    for (const num of nums) {
      if (freq[num]) return true;
      freq[num] = 1;
    }

    return false;
  }
}
