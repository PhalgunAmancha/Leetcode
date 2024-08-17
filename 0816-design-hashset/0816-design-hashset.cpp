class MyHashSet {
private:
    vector<bool> hashSet;

public:
    MyHashSet() {
        hashSet.resize(1000001, false);  // Assume keys in range [0, 1000000]
    }
    
    void add(int key) {
        if (key >= 0 && key < hashSet.size()) {
            hashSet[key] = true;
        }
    }
    
    void remove(int key) {
        if (key >= 0 && key < hashSet.size()) {
            hashSet[key] = false;
        }
    }
    
    bool contains(int key) {
        if (key >= 0 && key < hashSet.size()) {
            return hashSet[key];
        }
        return false;
    }
};


/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */