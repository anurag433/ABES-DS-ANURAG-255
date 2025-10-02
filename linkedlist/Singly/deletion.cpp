#include<iostream>
using namespace std ;

class Node{
    public:
    int data ;
    Node* next ;
    // constructor
    Node(int data){
        this->data = data ;
        this->next = NULL ;
    }

    // destructor
    ~Node(){
        int value = this->data ;
        // memory free
        if(this->next != NULL){
            delete next ;
            this->next = NULL ;
        }
        cout<<" memory is free for node with data "<< value <<endl ;
    }
};

void insertEnd(Node* &tail, int data){
    // create a new node
    Node* temp = new Node(data) ;  
    tail -> next = temp ;
    tail = tail -> next ; 
    

}

void deleteNode(Node* &head, int position){
    // deleting first or start node 
    if(position == 1 ){
        Node* temp  = head ;
        head = head -> next ;
        // memory free start node
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
        prev ->next = curr -> next ;
        curr -> next = NULL ;
        delete curr ;   // memeory free kro current ka 


    }
}


void print(Node* head){
    Node* temp = head ;
    while(temp != NULL){
        cout<< temp->data << " " ;
        temp = temp -> next ;
    }
    cout<<endl ;
}

int main(){

    //  create a new node
    Node* node1 = new Node(10) ;
    
    Node* head = node1 ;
    Node* tail = node1 ;
    insertEnd(tail, 12) ;
    insertEnd(tail, 15) ;
    insertEnd(tail, 20) ;
    print(head) ;

    deleteNode(head, 3) ;
    print(head) ;
    return 0 ;
}