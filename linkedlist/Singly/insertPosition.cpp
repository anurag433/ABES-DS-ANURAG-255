#include<iostream>
using namespace std ;

class Node{
    public:
    int data ;
    Node* next ;
    
    Node(int data){
        this->data = data ;
        this->next = NULL ;
    }
};

void insertEnd(Node* &tail, int data){
    // create a new node
    Node* temp = new Node(data) ;  
    tail -> next = temp ;
    tail = tail -> next ; 
    

}

void insertPosition(Node* &head ,int position, int data){
    Node* temp = head ;
    int cnt = 1 ;
    while(cnt < position-1){
        temp = temp -> next ;
        cnt++ ;
    } 
    // create a new node for data
    Node* nodeToInsert = new Node(data) ;
    nodeToInsert ->next = temp->next ;
    temp -> next = nodeToInsert ;
    

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
    print(head) ;
    
    insertEnd(tail, 12) ;
    print(head) ;

    insertEnd(tail, 15) ;
    print(head) ;

    insertPosition(head,2 ,22) ;
    print(head) ;

    return 0 ;
}