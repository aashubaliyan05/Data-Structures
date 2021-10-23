#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int key;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x){
        key = x;
        left = right = NULL;
    }
};

void printKth(TreeNode *root, int count){
    if(root == NULL){
        return ;
    }
    if(count == 0){
        cout<<root->key <<" ";
    }
    else{
        printKth(root->left, count-1);
        printKth(root->right, count -1);
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

    printKth(root, 1);
    return 0;
}