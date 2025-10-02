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

void insertBeg(Node* &head ,Node* &tail , int data){

    // empty list
    if(head == NULL){
        Node* temp = new Node(data) ;
        head = temp ;
        tail = temp ;
        
    }
    else{
        // create a new node
        Node* temp = new Node(data) ;
        temp -> next = head ;
        head -> prev = temp ;
        head = temp ;
    }
    
}

void insertEnd(Node* &tail ,Node* &head, int data){
    //empty list
    if(tail == NULL){
        Node* temp = new Node(data) ;
        tail = temp ;
        head = temp ;
        
    }
    else{
         Node* temp = new Node(data) ; 
        tail -> next = temp ;
        temp -> prev = tail;
        tail = temp ;
    } 
}

void insertPosition(Node* &head,Node* &tail, int position, int data){
    //  inserting at start
    if(position == 1){
        insertBeg(head,tail, data) ;
        return ;
    }
    // create new node
    Node* temp = head ;
    int cnt = 1 ;
    while(cnt<position-1){
        temp = temp -> next ;
        cnt++ ;
    }
    // inserting at last position
    if(temp -> next == NULL){
        insertEnd(tail,head , data) ;
        return ;
    }

    //  creating a node for data to be inserted
    Node* nodeToInsert = new Node(data) ;
    nodeToInsert -> next = temp -> next ;
    temp -> next -> prev = nodeToInsert ;
    temp -> next = nodeToInsert ;  
    nodeToInsert -> prev = temp ;

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
    
    Node* head = NULL ;
    Node* tail = NULL ;
    print(head) ;

    insertBeg( head,tail, 11) ;
    print(head) ;

    insertBeg( head,tail, 15) ;
    print(head) ;

    insertBeg( head,tail, 20) ;
    print(head) ;

    insertEnd(tail, head, 25) ;
    print(head) ;

    insertPosition(head, tail, 3, 100) ;
    print(head) ;

    insertPosition(head, tail, 1, 101) ;
    print(head) ;

    insertPosition(head, tail, 7, 102) ;
    print(head) ;

    return 0 ;
}