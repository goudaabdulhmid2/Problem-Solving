class MyHashSet {
    private set: any[];
    constructor() {
        this.set = [];
    }

    add(key: number): void {
        if (this.set.includes(key)) return;
        this.set.push(key);
    }

    remove(key: number): void {
        const indx = this.set.indexOf(key);
        if (indx !== -1) this.set.splice(indx, 1);
    }

    contains(key: number): boolean {
        if (this.set.includes(key)) return true;
        return false
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * var obj = new MyHashSet()
 * obj.add(key)
 * obj.remove(key)
 * var param_3 = obj.contains(key)
 */