#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = nullptr;
    
    Node* first = new Node();
    first->data = 10;
    first->next = nullptr;
    head = first;
    
    Node* second = new Node();
    second->data = 20;
    second->next = nullptr;
    first->next = second;
    
    Node* third = new Node();
    third->data = 30;
    third->next = nullptr;
    second->next = third;
    
    Node* fourth = new Node();
    fourth->data = 40;
    fourth->next = nullptr;
    third->next = fourth;
    
    cout << "Linked List: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
    int searchKey;
    cout << "Enter element to search: ";
    cin >> searchKey;
    
    temp = head;
    bool found = false;
    while (temp != nullptr) {
        if (temp->data == searchKey) {
            found = true;
            break;
        }
        temp = temp->next;
    }
    
    if (found) {
        cout << "Element " << searchKey << " found!" << endl;
    } else {
        cout << "Element " << searchKey << " not found!" << endl;
    }
    
    return 0;
}