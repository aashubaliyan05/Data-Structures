#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

Node *reverse(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *prev = NULL; 
    Node *curr = head;
    while(curr != NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}

void printList(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}


int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next = temp3;
    temp3->prev = temp2;
    cout<<"Linked List is  : ";
    printList(head);
    head = reverse(head);
    cout<<"Reverse is : ";
    printList(head);
    return 0;
}