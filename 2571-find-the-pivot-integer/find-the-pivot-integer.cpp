class Solution {
public:
    int pivotInteger(int n) 
    {
        vector<int>prefix_sum,suffix_sum;
        int ps=0,ss=0,x=n;
        for(int i=1;i<=n;i++)
        {
            ps+=i;
            prefix_sum.push_back(ps);
            ss+= x;
            x--;
            suffix_sum.push_back(ss);
        }
        for(auto x:prefix_sum)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        for(auto x:suffix_sum)
        {
            cout<<x<<" ";
        }
        int i=prefix_sum.size()-1,j=0;
        while(i>=0 && j<=suffix_sum.size())
        {
            if(prefix_sum[i] == suffix_sum[j])
            {
                return i+1;
            }
            i--;
            j++;
        }
        //if(i==0 && j==suffix_size())
        return -1;
    }
};