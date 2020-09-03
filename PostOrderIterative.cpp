class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>s;
        TreeNode* last = NULL;
        while(root || !s.empty())
        {
            if(root){
                s.push(root);
                root = root->left;
            }else{
                TreeNode* node =s.top();
                if(node->right && last != node->right)
                    root = node->right;
                else{
                    v.push_back(node->val);
                    last = node;
                    s.pop();
                }
            }
        }
        return v;
    }
};
