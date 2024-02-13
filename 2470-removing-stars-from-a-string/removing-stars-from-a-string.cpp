class Solution {
public:
    string removeStars(string s) {
        stack<char>stk;
        for(char x:s)
        {
            if(x=='*')
            {
                stk.pop();
            }
            else
            {
                stk.push(x);
            }
        }
        string ans="";
        while(!stk.empty())
        {
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};