class Solution {
public:
    vector<char> arr(string num)
    {
        int n=num.length();
        vector<char> a(n);
        for(int i=0;i<n;i++)
        {
            a[i]=num[i];
        }
        return a;
    }
    int compress(vector<char>& chars) 
    {

        int index=0;
        int i=0;
        while(i<chars.size())
        {
            int j=i;
            while(j<chars.size() && chars[j]==chars[i])
            {
                j++;
            }
            chars[index++] = chars[i];
            if(j-i > 1)
            {
                string count = to_string(j-i);
                vector<char> q = arr(count);
                for(int i=0;i<q.size();i++)
                {
                    chars[index++]=q[i];
                }

            }
            i=j;
        }    
        return index;
    }
};