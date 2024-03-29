#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

int dfsHeight(BinaryTreeNode<int>* root){
    if(!root) return 0;
    int leftHeight = dfsHeight(root->left);
    if(leftHeight == -1) return -1;
    int rightHeight = dfsHeight(root->right);
    if(rightHeight == -1) return -1;
    if(abs(leftHeight - rightHeight) > 1) return -1;

    return max(leftHeight, rightHeight) + 1;
}

bool isBalancedBT(BinaryTreeNode<int>* root) {
    return dfsHeight(root) != -1;
}