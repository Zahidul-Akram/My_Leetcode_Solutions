class RandomizedSet {
    vector<int> v;
    unordered_map<int,int> mm;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mm.find(val)!=mm.end())
            return false;
        
        v.push_back(val);
        mm[val] = v.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mm.find(val)==mm.end())
            return false;
        
        auto it = mm.find(val);
        v[it->second] = v.back();   // it -> second =  address & it -> first = val 
        v.pop_back();
        mm[v[it->second]] = it->second;
        mm.erase(val);
        return true;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */