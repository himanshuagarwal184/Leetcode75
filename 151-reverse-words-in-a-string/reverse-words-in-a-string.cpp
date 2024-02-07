class Solution {
public:
    string reverseWords(string s) 
    {
        stack<string> temp;
        istringstream iss(s);
        string word;
        while(iss >> word)
        {
            temp.push(word);
        }
        string ans;
        while(!temp.empty())
        {
            ans.append(temp.top());
            temp.pop();
            ans.append(" ");
        }
        ans.pop_back();
        return ans;
    }
};