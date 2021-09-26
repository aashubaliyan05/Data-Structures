#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};


Node* insertBegin(Node *head, int x){
    Node *temp = new Node(x);
    temp->next =  head;
    head->prev = temp;
    return temp;

}
Node *insertEnd(Node *head, int x){
    Node *temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    Node *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node *head = new Node(20);
    Node *temp1 = new Node(30);
    Node *temp2 = new Node(40);
    head->next = temp1;
    temp1->next = temp2;
    temp1->prev = head;
    temp2->prev = temp1;
    print(head);
    head = insertBegin(head, 15);
    print(head);
    head = insertBegin(head, 10);
    print(head);
    head = insertEnd(head, 50);
    print(head);
    return 0;
}