#include "linkedlist.h"

Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		printf("no memory aviable");
	}
	else {
		newNode->data = data;
		newNode->next = NULL;
	}
	return newNode;
}

Node* insertAtFront(Node* head, int data) {
	Node* newNode = createNode(data);
	newNode->next = head;
	return newNode;
}

void printList(Node* head) {
	Node* curr = head;

	while (curr)
	{
		printf("%d,", curr->data);
		curr = curr->next;
	}
	printf("\n");
}