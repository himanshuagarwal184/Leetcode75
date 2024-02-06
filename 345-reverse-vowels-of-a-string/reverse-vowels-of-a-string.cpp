class Solution {
public:
    string reverseVowels(string s) 
    {
        stack<string> temp;
        //cout<<s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                string t(1,s[i]);
                temp.push(t);
            }
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
               string a = temp.top();
               temp.pop();
                s.replace(i,1,a);
            }
        }
        return s;
    }
};