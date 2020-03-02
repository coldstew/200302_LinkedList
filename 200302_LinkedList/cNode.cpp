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
