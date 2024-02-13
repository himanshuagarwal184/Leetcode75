class Solution {
public:
    string removeStars(string s) {
        stack<char>stk;
        for(char x:s)
        {
            stk.push(x);
        }
        int c=0;
        string ans="";
        while(!stk.empty())
        {
            char ch=stk.top();
            stk.pop();
            if(ch=='*')
            {
                c++;
                while(c>0)
                {
                    if(stk.top()=='*')
                    {
                        c++;
                        stk.pop();
                    }
                    else
                    {
                        c--;
                        stk.pop();
                    }
                }
            }
            else if(c==0)
            {
                ans+=ch;
            }
            else if(c>0 && ch!='*')
            {
                c--;
                // stk.pop();
            }
            
        }
        // cout<<ans;
        reverse(ans.begin(),ans.end());
        return ans;
    }
};