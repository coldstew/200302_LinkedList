#include "pch.h"
#include "cDoubleLinkedList.h"


cDoubleLinkedList::cDoubleLinkedList()
	:head(nullptr), tail(nullptr)
{
	head = new Node;
	tail = new Node;

	head->next = tail;
	head->prev = nullptr;

	tail->next = nullptr;
	tail->prev = head;
}


cDoubleLinkedList::~cDoubleLinkedList()
{
}

void cDoubleLinkedList::Insert(int n)
{
	Node* newNode = new Node;
	newNode->data = n;
	newNode->prev = tail->prev;
	newNode->next = tail;

	tail->prev->next = newNode;
	tail->prev = newNode;

	//if (head)
	//{
	//	/*if ( head == tail )
	//	{
	//		head->prev = nullptr;
	//		head->next = newNode;
	//		newNode->prev = head;
	//		newNode->next = nullptr;
	//		tail = newNode;
	//	}
	//	else if ( head != tail )
	//	{
	//		head->prev = nullptr;
	//		head->next = tail;
	//		newNode->prev = tail;
	//		newNode->next = nullptr;
	//		tail = newNode;
	//	}*/
	//	newNode->prev = tail;
	//	tail->next = newNode;
	//	tail = newNode;
	//}
	//else
	//{
	//	head = newNode;
	//	tail = newNode;
	//	head->prev = nullptr;
	//	head->next = nullptr;
	//	
	//	tail->prev = nullptr;
	//	tail->next = nullptr;
	//}
}

void cDoubleLinkedList::Delete(int n)
{
	Node* findNode = Find(n);

	if (findNode)
	{		
		findNode->prev->next = findNode->next;
		findNode->next->prev = findNode->prev;
		delete findNode;
	}
}

Node * cDoubleLinkedList::Find(int n)
{
	Node* curr = head->next;
	while (curr != tail)
	{
		if (curr->data == n)
		{
			return curr;
		}
		curr = curr->next;
	}
	return nullptr;
}

void cDoubleLinkedList::Print()
{
	Node* temp = new Node;
	temp = head;

	while (temp->next) 
	{
		cout << temp->data << endl;
		temp = temp->next;

		if (temp == tail)
		{
			cout << temp->data << endl;
			break;
		}
	}
}
