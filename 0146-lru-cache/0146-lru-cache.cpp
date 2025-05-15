class LRUCache {
public:
    int cap;
    list<pair<int, int>> l;
    unordered_map<int, list<pair<int, int>>::iterator> m;

    LRUCache(int capacity) {
        cap = capacity;
    }

    int get(int key) {
        if (m.find(key) == m.end()) return -1;
        int val = m[key]->second;
        l.erase(m[key]);
        l.push_front({key, val});
        m[key] = l.begin();
        return val;
    }

    void put(int key, int value) {
        if (m.find(key) != m.end()) l.erase(m[key]);
        l.push_front({key, value});
        m[key] = l.begin();
        if (l.size() > cap) {
            int old = l.back().first;
            l.pop_back();
            m.erase(old);
        }
    }
};
