#include <iostream> // For input and output operations
#include <vector>   // For using the vector data structure

using namespace std;

// Define a class called Node to represent a node in a linked list
class Node {
public:
    int data;   // Data stored in the node (an integer in this case)
    Node* next; // Pointer to the next node in the list

    // Constructor for the Node class: initializes a new node with a given data value
    Node(int data2) {
        data = data2;    // Assign the input data2 to the node's data member
        next = nullptr;  // Set the next pointer to null, indicating the end of the list (or sublist)
    }

    // Another constructor for the Node class: initializes a new node with a given data value and a pointer to the next node
    Node(int data2, Node* next1) {
        data = data2;   // Assign the input data2 to the node's data member
        next = next1;  // Assign the input next1 pointer to the node's next pointer
    }
};

int main() {
    // Create a vector of integers to be stored in the linked list
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    // Create the first node of the linked list (the head) using the first element of the vector
    Node* head = new Node(vec[0]);

    // Print the data value of the head node
    cout << head->data << endl;

    // Print the memory address of the head node (for demonstration purposes)
    cout << head << endl;

    // Create a pointer called tail that initially points to the head of the list
    // The tail pointer will be used to add new nodes to the end of the list
    Node* tail = head;

    // Iterate through the vector, starting from the second element (index 1)
    for (int i = 1; i < vec.size(); i++) {
        // Create a new node with the current element of the vector
        Node* newNode = new Node(vec[i]);

        // Add the new node to the end of the list by setting the 'next' pointer of the current tail to the new node
        tail->next = newNode;

        // Update the tail pointer to point to the new node, which is now the last node in the list
        tail = newNode;
    }

    // Create a pointer called current that initially points to the head of the list
    // The current pointer will be used to traverse the list and print the data of each node
    Node* current = head;

    // Iterate through the linked list, printing the data value of each node
    while (current != nullptr) {  // Continue looping as long as the current pointer is not null (i.e., we haven't reached the end of the list)
        cout << current->data << endl; // Print the data value of the current node
        current = current->next;       // Move the current pointer to the next node in the list
    }
}