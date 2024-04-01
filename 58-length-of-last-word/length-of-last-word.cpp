class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int x=0;
        int k=s.length()-1;
        while(s[k]==' ')
        {
            k--;
        }
        for(;k>=0;k--)
        {
            if(s[k]==' ')
            {
                return x;
            }
            x++;
        }
        return x;
    }
};