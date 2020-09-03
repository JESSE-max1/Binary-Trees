class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        queue<TreeNode*>q;
        if(root == NULL) return v;
        q.push(root);
        while(!q.empty()){
            v.push_back(q.back()->val);
            for(int i = q.size();i>0;i--){
                TreeNode* node = q.front();
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
        }
        return v;
    }
};
