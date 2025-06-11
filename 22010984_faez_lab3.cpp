#include <iostream>
using namespace std;

// Node structure
struct Node {
    string name;
    Node* next;

    Node(string name) {
        this->name = name;
        this->next = nullptr;
    }
};

// Linked List class
class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Add node to the end
    void add_element(string name) {
        Node* newNode = new Node(name);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Display all nodes
    void display_list() {
        Node* curr_node = head;
        while (curr_node != nullptr) {
            cout << curr_node->name << " -> ";
            curr_node = curr_node->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList linkedlist;

    linkedlist.add_element("Ali");
    linkedlist.add_element("Abu");
    linkedlist.add_element("Ahmad");

    linkedlist.display_list();

    return 0;
}
