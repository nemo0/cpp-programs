// Linked list operations in C++

#include <stdlib.h>
#include <iostream>

using namespace std;

// Create a node
struct Node {
  int item;
  struct Node* next;
};


void insertAtEnd(struct Node** ref, int data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *ref;

  new_node->item = data;
  new_node->next = NULL;

  if (*ref == NULL) {
    *ref = new_node;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

// Print the linked list
void printList(struct Node* node) {
  while (node != NULL) {
    cout << node->item << " ";
    node = node->next;
  }
}
int main() {
  struct Node* head = NULL;
  insertAtEnd(&head, 1);
  insertAtEnd(&head, 2);
  insertAtEnd(&head, 3);
  insertAtEnd(&head, 4);
  insertAtEnd(&head, 5);
  cout << "Linked list: ";
  printList(head);

}
