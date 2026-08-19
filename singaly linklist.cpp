#include <iostream>
using namespace std;

struct Node {
    int id;
    string name;
    Node* next;
};

int main() {
    Node* head = NULL;
    Node* temp;
    
    Node* n1 = new Node{101, "Payal", NULL};
    Node* n2 = new Node{102, "Akshada", NULL};
    Node* n3 = new Node{103, "Samiksha", NULL};

    head = n1;
    n1->next = n2;
    n2->next = n3;

    cout << "Employees:\n";
    temp = head;

    while (temp != NULL) {
        cout << temp->id << " " << temp->name << endl;
        temp = temp->next;
    }

    int id = 101;
    temp = head;

    while (temp != NULL) {
        if (temp->id == id) {
            cout << "\nEmployee Found: " << temp->name << endl;
            break;
        }
        temp = temp->next;
    }

    temp = head;
    head = head->next;
    delete temp;

    cout << "\nAfter Deletion:\n";
    temp = head;

    while (temp != NULL) {
        cout << temp->id << " " << temp->name << endl;
        temp = temp->next;
    }

    return 0;
}
