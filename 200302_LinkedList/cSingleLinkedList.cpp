#include "pch.h"
#include "cSingleLinkedList.h"
#include "cNode.h"

using namespace std;

cSingleLinkedList::cSingleLinkedList()
	: head(nullptr)
{
}


cSingleLinkedList::~cSingleLinkedList()
{
}

void cSingleLinkedList::Insert(int n)
{
	cNode* newNode = new cNode;
	newNode->data = n;
	(*newNode).next = nullptr;

	if (head)
	{
		head->Insert(newNode);
	}
	else
	{
		head = newNode;
	}
}

void cSingleLinkedList::Delete(int n)
{
	if (head)
	{
		head->Delete(n, &head);
	}
}

void cSingleLinkedList::Print()
{
	if (head)
	{
	 	head->Print();
	}
	else return;

}

void cSingleLinkedList::Reverse()
{
	if (head)
	{
		head->Reverse(head);	// prev
	}
}
