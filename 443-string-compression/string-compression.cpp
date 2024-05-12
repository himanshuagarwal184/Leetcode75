class Solution {
public:
    int compress(vector<char>& chars) 
    {

        int index=0;
        int i=0,j=0;
        while(j<chars.size())
        {
            while(j<chars.size() && chars[j]==chars[i])
            {
                j++;
            }
            chars[index++] = chars[i];
            if(j-i > 1)
            {
                string count = to_string(j-i);
                for (char c:count)
                {
                    chars[index++]=c;
                }

            }
            i=j;
        }    
        return index;
    }
};