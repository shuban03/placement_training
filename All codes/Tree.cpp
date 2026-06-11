#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val = 0)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }

    void preorderTraversal(TreeNode *root)
    {
        if (root == nullptr)
            return;
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
    void postOrderTraversal(TreeNode *root)
    {
        if (root == nullptr)
            return;
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data << " ";
    }
    void inOrderTraversal(TreeNode *root)
    {
        if (root == nullptr)
            return;
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }

    void bfs(TreeNode *root)
    {
        if (root == nullptr)
            return;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            // print current node and add its children to the queue
            TreeNode *current = q.front();
            q.pop();
            cout << current->data << " ";
            if (current->left != nullptr)
                q.push(current->left);
            if (current->right != nullptr)
                q.push(current->right);
        }
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    cout << "Preorder Traversal: " << endl;
    root->preorderTraversal(root);
    cout << endl;
    cout << "Postorder Traversal: " << endl;
    root->postOrderTraversal(root);
    cout << endl;
    cout << "Inorder Traversal: " << endl;
    root->inOrderTraversal(root);
    cout << endl;
    cout << "Level-order Traversal: " << endl;
    root->bfs(root);
    cout << endl;

    return 0;
}