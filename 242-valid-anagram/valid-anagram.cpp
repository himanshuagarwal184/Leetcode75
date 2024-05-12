class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length()!=t.length())
        {
            return false;
        }
        vector<int>count(27,0);
        // memset(count,0,27);
        for(int i=0;i<s.length();i++)
        {
            int m=s[i]-'a',n=t[i]-'a';
            count[m]++;
            count[n]--;
        }
        for(int i=0;i<26;i++)
        {
            if(count[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
};