#pragma once

struct Node
{
	int data;

	Node* prev;
	Node* next;
};

class cDoubleLinkedList
{
public:
	cDoubleLinkedList();
	~cDoubleLinkedList();
	
	void Insert(int n);
	void Delete(int n);
	Node* Find(int n);
	void Print();

private:

	Node* head;
	Node* tail;
};

