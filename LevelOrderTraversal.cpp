class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>> v;
    queue<TreeNode *> q;
    if (root) q.push(root);
    while (!q.empty()) {
        int len = q.size();
        vector<int> level;
        for (int i = 0;i < len;++i) {
            TreeNode *node = q.front();
            level.push_back(node->val);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
            q.pop();
        }
        v.push_back(level);
    }
    return v;
    }
};
