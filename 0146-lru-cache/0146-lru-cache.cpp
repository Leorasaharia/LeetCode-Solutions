class LRUCache {
public:
    int cap;
    vector<int> keys,vals;
    LRUCache(int capacity){
        cap=capacity;
    }
    int get(int key){
        for (int i=0;i<keys.size();i++){
            if (keys[i]==key) {
                int val=vals[i];
                keys.erase(keys.begin()+i);
                vals.erase(vals.begin()+i);
                keys.push_back(key);
                vals.push_back(val);
                return val;
            }
        }
        return -1;
    }
    void put(int key, int value){
        for(int i=0;i<keys.size();i++){
            if (keys[i]==key){
                keys.erase(keys.begin()+i);
                vals.erase(vals.begin()+i);
                break;
            }
        }
        keys.push_back(key);
        vals.push_back(value);
        if(keys.size()>cap) {
            keys.erase(keys.begin());
            vals.erase(vals.begin());
        }
    }
};
