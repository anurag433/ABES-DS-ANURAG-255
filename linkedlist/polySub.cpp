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

// Function to subtract two polynomials (poly1 - poly2)
Node* subtractPolynomials(Node* poly1, Node* poly2) {
    Node* result = nullptr;
    Node* p1 = poly1;
    Node* p2 = poly2;

    while (p1 != nullptr && p2 != nullptr) {
        if (p1->exp > p2->exp) {
            insertEnd(result, p1->coeff, p1->exp);
            p1 = p1->next;
        } else if (p1->exp < p2->exp) {
            insertEnd(result, -p2->coeff, p2->exp); // Subtract
            p2 = p2->next;
        } else {
            // Exponents are equal
            insertEnd(result, p1->coeff - p2->coeff, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
    }

    // Remaining terms in poly1
    while (p1 != nullptr) {
        insertEnd(result, p1->coeff, p1->exp);
        p1 = p1->next;
    }

    // Remaining terms in poly2
    while (p2 != nullptr) {
        insertEnd(result, -p2->coeff, p2->exp); // Subtract
        p2 = p2->next;
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

    // Polynomial 1: 5x^3 + 4x^2 + 2
    insertEnd(poly1, 5, 3);
    insertEnd(poly1, 4, 2);
    insertEnd(poly1, 2, 0);

    // Polynomial 2: 3x^3 + 2x^1 + 1
    insertEnd(poly2, 3, 3);
    insertEnd(poly2, 2, 1);
    insertEnd(poly2, 1, 0);

    cout << "Polynomial 1: ";
    displayPolynomial(poly1);
    cout << "Polynomial 2: ";
    displayPolynomial(poly2);

    Node* diff = subtractPolynomials(poly1, poly2);
    cout << "Difference of Polynomials (Poly1 - Poly2): ";
    displayPolynomial(diff);

    return 0;
}
