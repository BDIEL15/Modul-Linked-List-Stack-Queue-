#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* buatNode(int nilai) {
    Node* baru = new Node;
    baru->data = nilai;
    baru->next = nullptr;
    return baru;
}

void tambahDepan(Node** head, int nilai) {
    Node* baru = buatNode(nilai);
    baru->next = *head;
    *head = baru;
}

void tambahBelakang(Node** head, int nilai) {
    Node* baru = buatNode(nilai);
    if (*head == nullptr) {
        *head = baru;
        return;
    }
    
    Node* curr = *head;
    while (curr->next != nullptr)
        curr = curr->next;
    curr->next = baru;
}

void hapusDepan(Node** head) {
    if (*head == nullptr) return;
    Node* temp = *head;
    *head = (*head)->next;
    delete temp;
}

void tampilkan(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data;
        if (curr->next != nullptr) cout << " -> ";
        curr = curr->next;
    }
    cout << " -> NULL" << endl;
}

void bebaskanList(Node** head) {
    while (*head != nullptr)
        hapusDepan(head);
}

int main() {
    Node* head = nullptr;

    tambahBelakang(&head, 10);
    tambahBelakang(&head, 25);
    tambahBelakang(&head, 47);
    tambahDepan(&head, 5);

    tampilkan(head);

    hapusDepan(&head);
    tampilkan(head);

    bebaskanList(&head);
    return 0;
}