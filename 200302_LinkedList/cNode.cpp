#include "pch.h"
#include "cNode.h"


cNode::cNode()
{
}


cNode::~cNode()
{
}

void cNode::Insert(cNode * node)
{
	if (next)
	{
		next->Insert(node);
	}
	else
	{
		node->next = nullptr;
		next = node;
	}
}

void cNode::Delete(int n, cNode ** ppThis)
{
	if (data == n)
	{
		(*ppThis) = next;
		delete this;
	}
	else if (next)
	{
		next->Delete(n, &next);
	}
}

void cNode::Print()
{
	if (data)
	{
		cout << data << endl;
		if (next) { next->Print(); }
	}
	else
	{
		return;
	}
}

void cNode::Reverse(cNode * prev)
{
	if (GetTail() == next)
	{

	}
}

cNode * cNode::GetTail()
{
	if (next)	{ return next->GetTail(); }
	return this;
}
