class MinStack 
{
private:
        stack<int>s;
        stack<int>q;
        int newmin=INT_MAX;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(val <= newmin)
        {
            cout<<"x ";
            newmin=val;
            q.push(val);
        }
    }
    
    void pop() 
    {
        int n=s.top();
        if(s.top()==q.top()){
            s.pop();
            q.pop();
            if(!q.empty()){
            newmin=q.top();
            }
            else{
                newmin= INT_MAX;
            }
        }   
        else
        {
            s.pop();
            cout<<"z ";
        }
    }
    
    int top() 
    {
        return s.top();
    }
    
    int getMin() 
    {
        cout<<"q ";
        return newmin;    
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */