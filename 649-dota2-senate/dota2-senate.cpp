class Solution {
public:
    string predictPartyVictory(string senate) 
    {
        queue<int>rad,dire;
        int n=senate.length();
        for(int i=0;i<n;i++)
        {
            if(senate[i]=='R')
            {
                rad.push(i);
            }
            else
            {
                dire.push(i);
            }
        }
        if(rad.size()==0)
        {
            return "Dire";
        }
        if(dire.size()==0)
        {
            return "Radiant";
        }
        while(!rad.empty() && !dire.empty())
        {
            if(rad.front() < dire.front())
            {
                dire.pop();
                int r= rad.front();
                rad.push(r+n);
                rad.pop();
            }else
            {
                rad.pop();
                int d = dire.front();
                dire.push(d+n);
                dire.pop();
            }
        }
        if(!rad.empty())
        {
            return "Radiant";
        }
        return "Dire";
        
    }
};