#pragma once

using namespace std;

class cNode;
class cSingleLinkedList
{
public:
	cNode* head;

	cSingleLinkedList();
	~cSingleLinkedList();

	void Insert(int n);
	void Delete(int n);
	void Print();
};

