class MyCalendarThree {
private:
    map<int,int>ma;
public:
    MyCalendarThree() {
    }
    
    int book(int start, int end) 
    {
        ma[start]++;
        ma[end]--;
        int sum=0,maxx=0;
        for(auto &it:ma)
        {
            sum+=it.second;
            maxx = max(sum,maxx);
        }
        return maxx;
     
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */