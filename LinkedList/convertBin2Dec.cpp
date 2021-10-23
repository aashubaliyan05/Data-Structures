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

long getNumber(Node *head){
    long number = 0;
    int count = -1;
    Node *curr = head;
    while(curr != NULL){
        count++;
        curr = curr->next;
    }
    while(head != NULL){
        number = number + (head->data*(2,count));
        head = head->next;
    }

    return number;

}
int main(){
    Node *head = new Node(0);
    Node *temp1 = new Node(0);
    Node *temp2 = new Node(1);
    Node *temp3 = new Node(1);
    Node *temp4 = new Node(0);
    Node *temp5 = new Node(0);
    Node *temp6 = new Node(0);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    temp4->next = temp5;
    temp5->next = temp6;
    cout<<getNumber(head);
    
    return 0;
}