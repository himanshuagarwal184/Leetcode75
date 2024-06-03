class Solution {
public:
    int appendCharacters(string s, string t) 
    {
        int i=0,j=0,m=s.length(),n=t.length();
        while(i<m && j<n)
        {
            
            if(s[i]==t[j])
            {
                j++;
            }
            i++;
        }   
        cout<<j;
        if(j==n)
        {
            return 0;
        }
        return n-j;
    }
};