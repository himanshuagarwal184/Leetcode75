class Solution {
public:
    int firstUniqChar(string s) 
    {
        vector<int>count(27,0);
        for(int i=0;i<s.length();i++)
        {
            int m = s[i]-'a';
            count[m]++;
        }
        for(int i=0;i<s.length();i++)
        {
            int m =s[i]-'a';
            cout<<count[m];
            if(count[m]==1)
            {
                return i;
            }
        }
        return -1;
    }
};