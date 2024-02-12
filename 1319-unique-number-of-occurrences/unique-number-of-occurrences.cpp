class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        multiset<int>a;
        set<int>b;
        for(auto x:arr)
        {
            a.insert(x);
            b.insert(x);
        }
        set<int>t;
        for(auto x:b)
        {
            int ct=a.count(x);
            if(t.count(ct)==0)
            {
                t.insert(ct);
            }
            else if(t.count(ct)==1)
            {
                return false;
            }
        }
        return true;
    }
};