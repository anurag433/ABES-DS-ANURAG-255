#include <iostream>
using namespace std;


struct node {
    int data;      
    node* next;      
};


void Insbeg(node*& head, int value) {
    
    node* newnode = new node();   
    newnode->data = value;        
    newnode->next = head;         

    
    head = newNode;
}


void displayList(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    node* head = nullptr;  
    
    Insbeg(head, 10);
    displayList(head);

    return 0;
}
