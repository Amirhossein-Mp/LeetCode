class RandomizedSet {
    vector<int> numbers;
    unordered_set<int> status;
public:
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(status.contains(val)){
            return false;
        }else{
            status.insert(val);
            numbers.push_back(val);
            return true;
        }
    }
    
    bool remove(int val) {
        if(status.contains(val)){
            status.erase(val);
            auto it=find(numbers.begin(),numbers.end(),val);
            numbers.erase(it);    
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int index=rand()%numbers.size();
        return numbers[index];
    }
};
