#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int val = 0) : data(val), prev(nullptr), next(nullptr);
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    DoublyLinkedList() : size(0) {
        head = new Node();
        tail = new Node();
        head->next = tail;
        tail->prev = head;
    }

    ~DoublyLinkedList() {
        Node* curr = head;
        while (curr != nullptr) {
            Node* temp = curr;
            curr = curr->next;
            delete temp;
        }
    }

    // targetNode 바로 뒤에 newNode 삽입
    void insert_after(Node* targetNode, int val) {
        Node* newNode = new Node(val);

        newNode->prev = targetNode;
        newNode->next = targetNode->next;
        targetNode->next->prev = newNode;
        targetNode->next = newNode;

        size++;
    }

    // targetNode 삭제
    void erase(Node* targetNode) {
        if (targetNode == head || targetNode == tail) return;

        targetNode->prev->next = targetNode->next;
        targetNode->next->prev = targetNode->prev;

        delete targetNode;
        size--;
    }

    Node* get_first() const {
        if(head->next == tail) return nullptr;
        return head -> next;
    }
}