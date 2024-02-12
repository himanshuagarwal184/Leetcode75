class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>freq1(26,0),freq2(26,0);
        vector<bool>word1Present(26,false),word2Present(26,false);

        for(char c:word1)
        {
            freq1[c-'a']++;
            word1Present[c-'a']=true;
        }
        for(char c:word2)
        {
            freq2[c-'a']++;
            word2Present[c-'a']=true;
        }
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        return freq1==freq2 && word1Present==word2Present;
        
    }
};