#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
} Node;

Node* createNode(int data);

Node* insertAtFront(Node* head, int data);

void printList(Node* head);

#endif /* LINKEDLIST_H_ */
