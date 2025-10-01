#include <iostream>
using namespace std;
int main() {
    
    struct Node {
        int data;
        Node* next;
    };

    Node* node = new Node();
    node->data = 10;      

    cout << node->data << endl;

    delete node; 
    return 0;
}
