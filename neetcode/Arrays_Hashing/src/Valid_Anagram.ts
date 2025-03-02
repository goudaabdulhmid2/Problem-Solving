// Problem link : https://neetcode.io/problems/is-anagram
class ValidAnagram {
  /**
   * @param {string} s
   * @param {string} t
   * @return {boolean}
   */
  isAnagram(s: string, t: string): boolean {
    const freq: Record<string, number> = {};

    if (s.length !== t.length) return false;

    for (const c of s) {
      freq[c] = (freq[c] || 0) + 1;
    }

    for (const c of t) {
      if (!freq[c]) return false;
      freq[c]--;

      if (freq[c] === 0) delete freq[c];
    }

    return Object.keys(freq).length === 0;
  }
}
