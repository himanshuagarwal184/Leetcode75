class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        stack<int>st;
        for(int &a:asteroids)
        {
            while(!st.empty() && a<0 && st.top()>0)
            {
                int sum=a+st.top();
                if(sum<0)
                {
                    st.pop();
                }
                else if(sum > 0)
                {
                    a=0;
                }
                else
                {
                    st.pop();
                    a=0;
                }
            }
            if(a!=0)
            {
                st.push(a);
            }
        }
        vector<int>vt;
        while(!st.empty())
        {
            vt.push_back(st.top());
            st.pop();
        }
        reverse(vt.begin(),vt.end());
        return vt;
    }
};