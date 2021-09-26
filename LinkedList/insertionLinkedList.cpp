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

Node* insertBegin(Node *head, int data){
    Node *tempNew = new Node(data);
    tempNew->next = head;
    return tempNew;

}


Node* insertEnd(Node *head, int data){
    Node *tempNew = new Node(data);
    if(head == NULL){
        return tempNew;
    }
    Node *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = tempNew;
    return head;
}

Node* insertPosition(Node *head, int pos, int data){
    if(pos == 1){
        return insertBegin(head,data);
    }
    Node *tempNew = new Node(data);
    Node *curr = head;
    for(int i = 1; i <= pos-2 && curr != NULL ; i++) {
        curr = curr->next;
    }
    //if postion is greater than size of linkedlist+1 
    if(curr == NULL){
        return head;
    }
    tempNew->next = curr->next;
    curr->next = tempNew;
    return head;
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
    Node *temp2 = new Node(50);
    head->next = temp1;
    temp1->next = temp2;

    cout<<"Linked List Before Insertion is : ";
    printList(head);

    head = insertBegin(head, 5);
    cout<<"\nAfter Insertion at Beginning : ";
    printList(head);

    head = insertBegin(head, 2);
    cout<<"\nAfter Insertion at Beginning : ";
    printList(head);

    head = insertEnd(head, 60);
    cout<<"\nAfter Insertion at End : ";
    printList(head);

    head = insertEnd(head, 70);
    cout<<"\nAfter Insertion at End : ";
    printList(head);

    head = insertPosition(head, 5, 30);
    cout<<"\nAfter Insertion at pos "<<5<<" : ";
    printList(head);

    head = insertPosition(head, 1, 1);
    cout<<"\nAfter Insertion at pos "<<6<<" : ";
    printList(head);

    head = insertPosition(head, 10, 80);
    cout<<"\nAfter Insertion at pos "<<6<<" : ";
    printList(head);




    return 0;
}