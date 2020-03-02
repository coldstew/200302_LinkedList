#pragma once
class cDoubleLinkedList
{
public:
	cDoubleLinkedList();
	~cDoubleLinkedList();

	struct Node
	{
		int data;

		Node* prev;
		Node* next;
	};
	

	void Insert(int n);
	void Delete(int n);
	Node* Find(int n);
	void Print();

private:

	Node* head;
	Node* tail;


};

