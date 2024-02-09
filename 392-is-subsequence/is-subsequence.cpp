class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int len = s.length(),c=0,k=0;
        if(len > t.length()){
            return false;
        }
        for(int i=0;i<t.length();i++)
        {
            if(t[i]==s[k]){
                c++;
                k++;

            }
        }   
        cout<<c;
        if(c==len)
        {
            return true;
        }
        return false;
    }
};