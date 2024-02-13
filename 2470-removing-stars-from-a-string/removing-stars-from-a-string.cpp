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
                        
                    }
                    else
                    {
                        c--;   
                    }
                    stk.pop();
                }
            }
            else
            {
                ans+=ch;
            }
         
            
        }
        // cout<<ans;
        reverse(ans.begin(),ans.end());
        return ans;
    }
};