#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

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

	return EXIT_SUCCESS;

}
