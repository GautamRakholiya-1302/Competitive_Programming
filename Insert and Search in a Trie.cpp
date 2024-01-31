class Solution
{
    public:
        //Function to insert string into TRIE.
        void insert(struct TrieNode *root, string s) {
            TrieNode *p=root;
            for(auto x: s) {
                int ind=x-'a';
                if(p->children[ind]==0) p->children[ind]=new TrieNode();
                p=p->children[ind];
            }
            p->isLeaf=1;
        }
        bool search(struct TrieNode *root, string s) {
            TrieNode *p=root;
            for(auto x: s) {
                int ind=x-'a';
                if(p->children[ind]==0) return 0;
                p=p->children[ind];
            }
            return p!=NULL && p->isLeaf==1;
        }
};
