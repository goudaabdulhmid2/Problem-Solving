function longestCommonPrefix(strs: string[]): string {
    let comman: string = "";
    if (strs.length === 0) return comman;
    for (let i = 0; i < strs[0].length; i++) {
        for (let j = 0; j < strs.length; j++) {
            if (i >= strs[j].length || strs[0][i] !== strs[j][i]) return comman;

        }
        comman = `${comman}${strs[0][i]}`;
    }
    return comman;

};