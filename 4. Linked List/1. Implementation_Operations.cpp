#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* link;
};

void printList(node* ptr)
{
	if (ptr == NULL) return;
	cout << ptr->data << " ";
	ptr = ptr->link;
	printList(ptr);
}

void insertAtHead( node** referenceToHead , int value )
{
	node* temp;
	temp = new node();

	temp->data = value;
	temp->link = *referenceToHead;

	*referenceToHead = temp;
}

void insertAtTail(node* ptr , int value)
{
	node* temp;
	temp = new node();

	temp->data = value;
	temp->link = NULL;

	while (ptr->link != NULL)
	{
		ptr = ptr->link;
	}

	ptr->link = temp;
}

void insertAtIndex(node* ptr , int index , int value)
{
	node* temp;

	temp = new node();
	temp->data = value;

	int count = 0;
	while (count != index - 1)
	{
		ptr = ptr->link;
		count++;
	}

	temp->link = ptr->link;
	ptr->link = temp;
}

void deleteAtHead(node** referenceToHead )
{
	node* head = *referenceToHead;
	*referenceToHead = head->link;
}

void deleteAtTail(node* ptr)
{
	while (ptr->link->link != NULL)
	{
		ptr = ptr->link;
	}

	ptr->link = NULL;
}

void deleteAtIndex(node* ptr , int index)
{
	int count = 0;
	while (count != index - 1)
	{
		ptr = ptr->link;
		count++;
	}

	node* temp = ptr->link;
	ptr->link = temp->link;
}

int main()
{

//Creating a Linked List

	node* head;
	node* first;
	node* second;
	node* third;

	first = new node();
	second = new node();
	third = new node();

	head = first;

	first-> data = 2;
	first-> link = second;

	second-> data = 3;
	second-> link = third;

	third-> data = 4;
	third-> link = NULL;

	node** temp = &head;

	// printList(head);
	// insertAtHead(temp , 7);
	// printList(head);
	insertAtTail(head , 8);
	insertAtIndex(head , 2, 9);
	// insertAtIndex(head , 4, 10);
	// deleteAtHead(temp);
	//deleteAtIndex(head , 2);
	deleteAtTail(head);
	printList(head);
}
