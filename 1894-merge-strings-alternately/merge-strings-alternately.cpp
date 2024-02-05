class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        string res;
        int a=word1.length();
        int b=word2.length();
        int n;
        if(a<=b)
        {
            n=a;
        }
        else{
            n=b;
        }
        string ans;
        for(int i=0;i<n;i++)
        {
            string t(1,word1[i]);
            string q(1,word2[i]);
            ans.append(t);
            ans.append(q);
        }
        if(a>b)
        {
            for(int i=0;i<a-n;i++)
            {
                string x(1,word1[n+i]);
                ans.append(x);
            }
        }
        else if(a<b)
        {
            for(int i=0;i<b-n;i++)
            {
                string x(1,word2[n+i]);
                ans.append(x);
            }
        }
        return ans;
        
    }
};