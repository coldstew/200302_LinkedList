#include "pch.h"
#include "cDoubleLinkedList.h"


cDoubleLinkedList::cDoubleLinkedList()
	:head(nullptr)
{
}


cDoubleLinkedList::~cDoubleLinkedList()
{
}

void cDoubleLinkedList::Insert(int n)
{
	Node* newNode = new Node;
	newNode->data = n;
	newNode->prev = nullptr;
	newNode->next = nullptr;

	if (head)
	{
		/*if ( head == tail )
		{
			head->prev = nullptr;
			head->next = newNode;
			newNode->prev = head;
			newNode->next = nullptr;
			tail = newNode;
		}
		else if ( head != tail )
		{
			head->prev = nullptr;
			head->next = tail;
			newNode->prev = tail;
			newNode->next = nullptr;
			tail = newNode;
		}*/
		newNode->prev = tail;
		tail->next = newNode;
		tail = newNode;
	}
	else
	{
		head = newNode;
		tail = newNode;

		head->prev = nullptr;
		head->next = nullptr;
		
		tail->prev = nullptr;
		tail->next = nullptr;
	}
}

void cDoubleLinkedList::Delete(int n)
{
	if (head->data == n)
	{
		head = head->next;
		delete this;
	}
	else if (head->next)
	{
		Delete(n);
	}
}

Node * cDoubleLinkedList::Find(int n)
{
	if (head->data == n)
	{
		return head;
	}
	else
	{
		return Find(n);
	}
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
