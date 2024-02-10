class Solution {
public:
    int maxVowels(string s, int k) 
    {
        int c=0;
        for(int i=0;i<k;i++)
        {
            if(s[i] == 'a' || s[i] =='e' || s[i] == 'i' || s[i] == 'o' || s[i] =='u' || s[i] == 'A' || s[i] =='E' || s[i] =='I' || s[i] == 'O' || s[i] =='U')
            {
                c++;
            }
        }    
        int w=c;
        for(int i=k;i<s.length();i++)
        {
            if(s[i-k] == 'a' || s[i-k] =='e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] =='u' || s[i-k] == 'A' || s[i-k] =='E' || s[i-k] =='I' || s[i-k] == 'O' || s[i-k] =='U')
            {
                c--;
            }
            if(s[i] == 'a' || s[i] =='e' || s[i] == 'i' || s[i] == 'o' || s[i] =='u' || s[i] == 'A' || s[i] =='E' || s[i] =='I' || s[i] == 'O' || s[i] =='U')
            {
                c++;
            }
            w=max(w,c);
        }
        return w;
    }
};