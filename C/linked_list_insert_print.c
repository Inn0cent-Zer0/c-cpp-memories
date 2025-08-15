#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct node {
    int data;
    struct node* next;
};

// Declare head pointer globally
struct node* head = NULL;

// Function to insert a node at the beginning
void insert(int data) {
    struct node* link = (struct node*)malloc(sizeof(struct node));  // Allocate memory
    link->data = data;      // Set data
    link->next = head;      // Point to current head
    head = link;            // Update head to new node
}

// Function to print the linked list
void printList() {
    struct node* ptr = head;
    printf("Linked List: ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Optional: Function to delete the entire list
void deleteList() {
    struct node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    // Insert elements
    insert(10);
    insert(30);
    insert(20);
    insert(1);
    insert(40);
    insert(56);

    // Print the list
    printList();

    // Delete the list
    deleteList();

    printf("\nLinked list after delete:\n");
    printList();  // Should print "Linked List: NULL"

    return 0;
}
