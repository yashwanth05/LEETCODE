class RandomizedSet {
public:
    map<int,int> mp;
    vector<int> v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)==mp.end()){
            v.push_back(val);
            mp[val] = v.size()-1;
            return true;
        }
        else{
            return false;
        }
    };
    
    bool remove(int val) {
        if(mp.find(val)!=mp.end()){
            v[mp[val]] = v[v.size()-1];
            mp[v[v.size()-1]] = mp[val];
            mp.erase(val);
            v.pop_back();
            return true;
        }
        else{
            return false;
        }
    }
    
    int getRandom() {
        int lower = 0, upper = v.size()-1;
        int random_in_range = lower + rand() % (upper - lower + 1);
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        return v[random_in_range];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */