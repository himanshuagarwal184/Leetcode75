class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        vector<int>vt;
        for(int a:asteroids)
        {
            while(!vt.empty() && a<0 && vt.back()>0)
            {
                int sum=a+vt.back();
                if(sum<0)
                {
                    vt.pop_back();
                }
                else if(sum > 0)
                {
                    a=0;
                }
                else
                {
                    vt.pop_back();
                    a=0;
                }
            }
            if(a!=0)
            {
                vt.push_back(a);
            }
        }
        return vt;
    }
};