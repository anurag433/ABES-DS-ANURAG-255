#include<iostream>
using namespace std ;

class Node{
    public:
    int data ;
    Node*prev ;
    Node* next ;

    // constructor
    Node(int data){
        this-> data = data ;
        this-> prev = NULL ;
        this-> next = NULL ;
    }
} ;

void insertBeg(Node* &head , int data){
    // create a new node
    Node* temp = new Node(data) ;
    temp -> next = head ;
    head -> prev = temp ;
    head = temp ;
}

void insertEnd(Node* &tail , int data){
    Node* temp = new Node(data) ; 
    tail -> next = temp ;
    temp -> prev = tail;
    tail = temp ; 
}

void print(Node* head){
    Node*temp = head ;

    while(temp != NULL){
        cout<< temp->data<<" " ;
        temp = temp-> next ;
    }
    cout << endl ; 

}


int main(){
    Node* node1 = new Node(10) ;
    Node* head = node1 ;
    Node* tail = node1 ;
    print(head) ;

    insertBeg(head, 11) ;
    print(head) ;

    insertBeg(head, 15) ;
    print(head) ;

    insertBeg(head, 20) ;
    print(head) ;

    insertEnd(tail, 25) ;
    print(head) ;

    return 0 ;
}