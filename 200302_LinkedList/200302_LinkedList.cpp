#include "pch.h"
#include <iostream>
#include "cSingleLinkedList.h"
#include "cDoubleLinkedList.h"

int main()
{
	cSingleLinkedList list;
	cDoubleLinkedList list2;

	//cin >> a;
	/*list.Insert(10);
	list.Insert(15);
	list.Insert(20);
	list.Insert(25);

	list.Delete(35);

	list.Insert(25);
	
	list.Print();*/

	list2.Insert(10);
	list2.Insert(15);
	list2.Insert(20);
	list2.Insert(25);
	
	list2.Delete(35);
	
	list2.Insert(25);

	list2.Print();
}