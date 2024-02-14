class RecentCounter {
public:
    vector<int>request;    
    RecentCounter() 
    {
        int k=0;
    }
    
    int ping(int t) {
        request.push_back(t);
       int k=0;
        for(int i=0;i<request.size();i++)
        {
            if(request[i] >= (t-3000) && request[i] <= t)
            {
                k++;
            }
        }
        return k;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */