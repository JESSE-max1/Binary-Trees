# include<bits/stdc++.h>
using namespace std;

class Node{
public:
    char data;
    Node* left;
    Node* right;
};

Node* Insert(Node* root,char data)
{
    if(root == NULL){
        root = new Node();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if(data <= root->data)
        root->left = Insert(root->left,data);
    else
        root->right = Insert(root->right,data);
    return root;
}

void preorder(Node* root)
{
    if(root == NULL) return;
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root)
{
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}

void postorder(Node* root)
{
    if(root == NULL) return;
    postorder(root->left);
    cout << root->data;
    postorder(root->right);
}

int main()
{
    Node* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z');
	root = Insert(root,'A'); root = Insert(root,'C');
	cout << "Pre order : ";
	preorder(root);
	cout << "\n";
	cout<< "In order: ";
	inorder(root);
	cout << "\n";
	cout << "Post Order: ";
	postorder(root);

}

