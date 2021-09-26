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

int searchKey(Node *head, int x){
    Node *temp = head;
    int count = 0;
    while(temp != NULL){
        count ++;
        if(temp->data == x){
            return count;
        }
        temp = temp->next;
    }
    return -1;
}

int searchKeyRec(Node *head, int x){
    if(head == NULL){
        return -1;
    }
    if(head->data == x){
        return 1;
    }
    else{
        int res = searchKeyRec(head->next, x);
        if(res == -1){
            return -1;
        }
        else{
            return (res+1);
        }
    }
    
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    cout<<searchKey(head,20)<<endl;
    cout<<searchKey(head,60)<<endl;
    cout<<searchKeyRec(head,50)<<endl;
    cout<<searchKeyRec(head,10)<<endl;
    return 0;
}