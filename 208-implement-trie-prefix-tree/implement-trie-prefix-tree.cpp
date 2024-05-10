class Trie {

private:
    Trie* child[26];
    bool isEnd;

public:
    Trie() {

        isEnd = false;
        for (int i = 0; i < 26; i++) {
            child[i] = nullptr;
        }
    }

    void insert(string word) {
        Trie* curr = this;
        for (int i = 0; i < word.length(); i++) {
            int index = word[i] - 'a';
            if (curr->child[index] == nullptr) {
                Trie* node = new Trie();
                curr->child[index]=node;
            }
            curr = curr->child[index];
        }
        curr->isEnd = true;
    }

    bool search(string word) {
        Trie* curr = this;
        for (int i = 0; i < word.length(); i++) {
            int index = word[i] - 'a';
            if (curr->child[index] == nullptr) {
                return false;
            }
            curr = curr->child[index];
        }
        return curr->isEnd;
    }

    bool startsWith(string prefix) {
        Trie* curr = this;
        int i;
        for (i = 0; i < prefix.length(); i++) {
            int index = prefix[i] - 'a';
            if (curr->child[index]) {
                curr=curr->child[index];
            }
            else{
                return false;
            }
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */