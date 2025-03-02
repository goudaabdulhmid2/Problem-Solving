class GroupAnagrams {
  /**
   * @param {string[]} strs
   * @return {string[][]}
   */
  groupAnagrams(strs: string[]): string[][] {
    const map: Map<string, string[]> = new Map();

    for (const str of strs) {
      const key = str.split("").sort().join("");

      const group = map.get(key) || [];
      group.push(str);

      map.set(key, group);
    }

    return Array.from(map.values());
  }
}
