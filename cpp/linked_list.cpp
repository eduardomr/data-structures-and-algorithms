#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void append(Node** head_ref, int value){

    Node* aux = new Node();
    Node *last = *head_ref;

    aux->data = value;
    aux->next = NULL;


    if(*head_ref == NULL){
        *head_ref = aux;
    }

    while ( last->next != NULL ){
        last = last->next;
    }

    last->next = aux;

    return;
}

void printList(Node* n)
{
    if (n==NULL){
        cout << "Empty List" << endl;
        return;
        }

    while (n != NULL){
        cout << n->data << " ";
          
        n = n->next;
    }
    cout << endl;  
    }

void clearList(Node* &n){
    Node* aux  = NULL;
    while (n != NULL){
        aux = n->next; 
        n = aux;
        }
    }

int main(){

    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();


    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;


    printList(head);
    append(&head, 4);
    printList(head);

    return 0;
}