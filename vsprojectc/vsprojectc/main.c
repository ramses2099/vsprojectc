#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
} Node;

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

int main(void) {
	
	Node* head = createNode(10);
	head->next = createNode(20);
	head->next->next = createNode(30);

	printf("Linked List Default: \n");
	printList(head);

	int data = 5;
	head = insertAtFront(head, data);
	
	printf("Linked List Change: \n");
	printList(head);

	free(head);

	head = NULL;

	return 0;

}
