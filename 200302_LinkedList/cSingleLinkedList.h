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
	void Reverse();	// 리스트의 관계를 반전시킨다.
};

