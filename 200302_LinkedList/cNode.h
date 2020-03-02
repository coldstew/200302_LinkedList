#pragma once
class cNode
{
public:
	int	data;
	cNode* next;

	cNode();
	~cNode();

	void Insert(cNode* node);
	void Delete(int n, cNode** ppThis);
	void Print();
};

