class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* cur = root;
        while(cur){
            if(cur->left){
                TreeNode* tmp=cur->left;
                while(tmp->right) tmp= tmp->right;
                tmp->right = cur->right;
                cur->right = cur->left;
                cur->left = nullptr;
            }
            cur = cur->right;
        }

    }
};
