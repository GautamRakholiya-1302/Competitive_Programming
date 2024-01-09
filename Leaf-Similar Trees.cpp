Leaf-Similar Trees
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string t1;
        string t2;

        dfs(root1,t1);
        dfs(root2,t2);
        return t1==t2;


    }

    void dfs(TreeNode *root,string &s)
    {
        if(root==NULL)
        {
            return ;
        }
        if(root->left==NULL && root->right==NULL)
        {
            s+=to_string(root->val)+"#";
        }
        dfs(root->left,s);
        dfs(root->right,s);

    }
};
