// struct Trie for N alphabets
const int N=26;
struct Trie {
    Trie* next[N];
    bool isEnd = 0;

    Trie() {
        fill(next, next+N, (Trie*)NULL);
    }

    ~Trie() {
    //    cout<<"Destructor\n";
        for (int i=0; i<N; ++i) {
            if (next[i] !=NULL) {
                delete next[i];
            }
        }
    }

    void insert(string& word) {
        Trie* Node=this;
        for(char c: word){
            int i=c-'a';
            if(Node->next[i]==NULL)
                Node->next[i]=new Trie();
            Node=Node->next[i];
        }
        Node->isEnd=1;
    }
};

class Solution {
public:
    Trie* trie = new Trie();
    vector<vector<string>> dp;
    int n;
    
    vector<string> dfs(string& s, int start) {
        if (start == n) return {""};
        if (!dp[start].empty()) return dp[start];

        vector<string> ans;
        Trie* Node = trie;
        string currentPrefix = "";

        for (int i = start; i < n; ++i) {
            int idx = s[i] - 'a';
            if (Node->next[idx] == NULL) break;

            Node = Node->next[idx];
            currentPrefix += s[i];

            if (Node->isEnd) {
                vector<string> rest = dfs(s, i+1);
                for (string& r : rest) {
                    ans.push_back(currentPrefix + (r.empty() ? "" : " ") + r);
                }
            }
        }

        dp[start] = ans;
        return dp[start];
    }

    vector<string> wordBreak(string& s, vector<string>& wordDict) {
        n=s.size();
        for (auto& w : wordDict)
            trie->insert(w);

        dp.resize(n+ 1);  // Initialize dp for memoization
        return dfs(s, 0);
    }
};