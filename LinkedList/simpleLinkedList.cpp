#include<iostream>

using namespace std;



struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void traverse(Node* head){
    //Node * current = head; and then use current instead of head
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

//O(n) auxilary space
void traverseRecursive(Node *head){
    if(head != NULL){
        cout<<head->data<<" ";
        traverseRecursive(head->next);
    }
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    cout<<"Linked List Iteration is : ";
    traverse(head);
    cout<<"\nLinked List Recursion is : ";
    traverseRecursive(head);
    return 0;
}