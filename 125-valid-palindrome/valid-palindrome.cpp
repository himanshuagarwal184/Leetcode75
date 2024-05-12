class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
            {
                temp+=s[i];
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                temp += (s[i]+32);
            }
        }
        string c= temp;
        reverse(temp.begin(),temp.end());
        if(c==temp)
            return true;
        return false;;
    }
};