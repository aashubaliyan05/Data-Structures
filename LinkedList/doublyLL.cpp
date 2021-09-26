#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

void printBegin(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
void printEnd(Node* tail){
    while(tail != NULL){
        cout<<tail->data<<" ";
        tail = tail->prev;
    }
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    cout<<"Print from Head : ";
    printBegin(head);
    cout<<"\nPrint from Tail : ";
    printEnd(temp2);

    return 0;
}