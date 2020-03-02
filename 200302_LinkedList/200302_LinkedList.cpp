#include "pch.h"
#include <iostream>
#include "cSingleLinkedList.h"

int main()
{
	cSingleLinkedList list;
	int a;
		

	//cin >> a;
	list.Insert(10);
	list.Insert(15);
	list.Insert(20);
	list.Insert(25);

	list.Delete(35);

	list.Insert(25);

	list.Print();
}