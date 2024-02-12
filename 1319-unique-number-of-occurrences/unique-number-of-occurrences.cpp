class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int ele:arr){
            m[ele]++;
        }
        unordered_set<int>mset;
        for(auto[key,value] : m){
            mset.insert(value);
        }
        return m.size()==mset.size();
    }
};