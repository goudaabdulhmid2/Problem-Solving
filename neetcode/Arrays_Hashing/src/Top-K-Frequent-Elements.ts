// Problem link: https://neetcode.io/problems/top-k-elements-in-list
class TopKFrequentElements {
  /**
   * @param {number[]} nums
   * @param {number} k
   * @return {number[]}
   */
  topKFrequent(nums: number[], k: number): number[] {
    const freq: Map<number, number> = new Map();

    for (const num of nums) {
      freq.set(num, (freq.get(num) || 0) + 1);
    }

    return Array.from(freq.entries())
      .sort((a, b) => b[1] - a[1])
      .slice(0, k)
      .map((pair) => pair[0]);
  }
}
