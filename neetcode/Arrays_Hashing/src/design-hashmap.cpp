class MyHashMap
{
    int siz = 1e6 + 4;
    vector<int> arr;

public:
    MyHashMap()
    {
        arr.resize(siz, -1);
    }

    void put(int key, int value)
    {
        arr[key] = value;
    }

    int get(int key)
    {
        return arr[key];
    }

    void remove(int key)
    {
        arr[key] = -1;
    }
};
