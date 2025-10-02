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

    // destructor
    ~Node(){
        int value = this->data ;
        // memory free
        if(this->next != NULL){
            delete next ;
            this->next = NULL ;
        }
        cout<<"Memory is free for node with data "<< value <<endl ;
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

void deleteNode(Node* &head, int position){
    // deleting first or start node 
    if(position == 1 ){
        Node* temp  = head ;
        temp -> next -> prev = NULL ;
        head = head -> next ;
        temp -> next = NULL ;
        delete temp ;
    }
    else{
        //  deleting any middle or last node 
        Node* curr = head ;
        Node* prev = NULL ;
        int cnt = 1 ;
        while(cnt < position){
            prev = curr ;
            curr = curr -> next ;
            cnt++ ;
        }
        curr -> prev = NULL ;
        prev ->next = curr -> next ;   
        curr -> next = NULL ;
        delete curr ;   // memeory free kro current ka 


    }
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

    deleteNode(head, 1) ;
    print(head) ;

    deleteNode(head, 4) ;
    print(head) ;

    deleteNode(head, 5) ;
    print(head) ;

    return 0 ;
}