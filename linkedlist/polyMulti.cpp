#include <iostream>
using namespace std;

// Node structure
struct Node {
    int coeff;
    int exp;
    Node* next;
};

// Function to create a new node
Node* createNode(int c, int e) {
    Node* newNode = new Node;
    newNode->coeff = c;
    newNode->exp = e;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert node at end
void insertEnd(Node*& head, int c, int e) {
    Node* newNode = createNode(c, e);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = newNode;
}

// Function to add a term in result polynomial (combine same exponents)
void addTerm(Node*& head, int c, int e) {
    if (head == nullptr) {
        head = createNode(c, e);
        return;
    }
    Node* temp = head;
    Node* prev = nullptr;

    // Traverse to find matching exponent or end
    while (temp != nullptr && temp->exp > e) {
        prev = temp;
        temp = temp->next;
    }

    if (temp != nullptr && temp->exp == e) {
        temp->coeff += c;  // Add coefficients
    } else {
        Node* newNode = createNode(c, e);
        if (prev == nullptr) {  // Insert at beginning
            newNode->next = head;
            head = newNode;
        } else {
            newNode->next = temp;
            prev->next = newNode;
        }
    }
}

// Function to multiply two polynomials
Node* multiplyPolynomials(Node* poly1, Node* poly2) {
    Node* result = nullptr;

    for (Node* p1 = poly1; p1 != nullptr; p1 = p1->next) {
        for (Node* p2 = poly2; p2 != nullptr; p2 = p2->next) {
            int c = p1->coeff * p2->coeff;
            int e = p1->exp + p2->exp;
            addTerm(result, c, e);
        }
    }

    return result;
}

// Function to display polynomial
void displayPolynomial(Node* head) {
    while (head != nullptr) {
        cout << head->coeff << "x^" << head->exp;
        if (head->next != nullptr)
            cout << " + ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() {
    Node* poly1 = nullptr;
    Node* poly2 = nullptr;

    // Polynomial 1: 5x^2 + 4x + 2
    insertEnd(poly1, 5, 2);
    insertEnd(poly1, 4, 1);
    insertEnd(poly1, 2, 0);

    // Polynomial 2: 3x + 1
    insertEnd(poly2, 3, 1);
    insertEnd(poly2, 1, 0);

    cout << "Polynomial 1: ";
    displayPolynomial(poly1);
    cout << "Polynomial 2: ";
    displayPolynomial(poly2);

    Node* product = multiplyPolynomials(poly1, poly2);
    cout << "Product of Polynomials: ";
    displayPolynomial(product);

    return 0;
}
