class Solution {
public:
    Node* connect(Node* root) {
        Node* prev=root, *cur;
        while(prev)
        {
            cur=prev;
            while(cur&&cur->left){
                cur->left->next = cur->right;
                if(cur->next){
                    cur->right->next = cur->next->left;
                }
                cur = cur->next;
            }
            prev=prev->left;
        }
        return root;
    }
};
