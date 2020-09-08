//recursive
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return helper(root->left,root->right);
    }
    bool helper(TreeNode* p,TreeNode* q){
        if(!p && !q) return true;
        else if(!p || !q) return false;
        if(p->val != q->val) return false;
        return helper(p->left,q->right) && helper(p->right,q->left);
    }
};

//iterative
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        queue<TreeNode*>q;
        q.push(root->left);
        q.push(root->right);
        while(!q.empty()){
            TreeNode* node1 = q.front();
            q.pop();
            TreeNode* node2 = q.front();
            q.pop();
            if(!node1 && node2) return false;
            if(!node2 && node1) return false;
            if(node1 && node2){
                if(node1->val != node2->val) return false;
                q.push(node1->left);
                q.push(node2->right);
                q.push(node1->right);
                q.push(node2->left);
            }
        }
        return true;
    }
};
