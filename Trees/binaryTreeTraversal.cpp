#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

void inorder(TreeNode *root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->data <<" ";
        inorder(root->right);
    }
    
}

void postOrder(TreeNode *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

void preOrder(TreeNode *root){
    if(root != NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main(){
    TreeNode *root = new TreeNode(10);
    TreeNode *t1 = new TreeNode(20);
    TreeNode *t2 = new TreeNode(30);
    TreeNode *t3 = new TreeNode(40);
    TreeNode *t4 = new TreeNode(50);
    TreeNode *t5 = new TreeNode(60);
    TreeNode *t6 = new TreeNode(70);
    TreeNode *t7 = new TreeNode(80);
    TreeNode *t8 = new TreeNode(90);
    TreeNode *t9 = new TreeNode(100);

/*

                      10
                20          30
            40     50    80      90
        60    70          100

    inorder    - left , root, right  -> 60 40 70 20 50 10 80 100 30 90
    pre order  - root, left , right  -> 10 20 40 60 70 50 30 80 100 90
    post order - left, right, root   -> 60 70 40 50 20 100 80 90 30 10  
*/
    root->left = t1;
    root->right = t2;

    t1->left = t3;
    t1->right = t4;
    t3->left = t5;
    t3->right = t6;

    t2->right = t8;
    t2->left = t7;
    t7->right = t9; 

    cout<<"Inorder Travesral    : ";
    inorder(root);
    cout<<"\nPre order Travesral  : ";
    preOrder(root);
    cout<<"\nPost order Travesral : ";
    postOrder(root);
    
    return 0;
}