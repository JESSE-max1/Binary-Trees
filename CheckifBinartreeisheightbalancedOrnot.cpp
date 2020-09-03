class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL)
            return 0;
        int leftheight = height(root->left);
        int rightheight = height(root->right);
        if(rightheight == -1 || leftheight == -1) return -1;
        if(abs(leftheight - rightheight) > 1) return -1;
        return max(leftheight,rightheight)+1;

    }

    bool isBalanced(TreeNode* root) {
        return height(root) != -1;

    }
};
