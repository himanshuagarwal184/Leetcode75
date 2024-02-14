class Solution {
public:
    string decodeString(string s) 
    {
        string ans="";
        stack<char> stk;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==']')
            {
                while(stk.size()>0 && stk.top()!='[')
                {
                    ans=stk.top()+ans;
                    stk.pop();
                }
                if(stk.size()!=0)
                {
                    stk.pop();
                }
                string num="";
                while(stk.size()>0 && isdigit(stk.top()))
                {
                    num=stk.top()+num;
                    stk.pop();
                }
                int number=stoi(num);
                string temp=ans;
                for(int i=0;i<number-1;i++)
                {
                    ans+=temp;
                }
                for(int i=0;i<ans.size();i++)
                {
                    stk.push(ans[i]);
                }
                ans="";
            }
            else
            {
                stk.push(s[i]);
            }
        }
        while(stk.size()>0)
        {
            ans=stk.top()+ans;
            stk.pop();
        }
        return ans;
    }    
};