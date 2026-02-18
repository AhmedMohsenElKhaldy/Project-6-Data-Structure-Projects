#pragma once
#include<iostream>
#include<queue>
#include"ClsDoubleLinkedList.h"
using namespace std;

template<class T>

class ClsMyQueue
{
protected:
		ClsDoubleLinkedList<T> _MyList;
public:


	void Push(int Item)
	{
		_MyList.InsertAtEnd(Item);
	}

	void Print()
	{
		_MyList.PrintNode();
	}

	int Size()
	{
		return _MyList.Size();
	}
	int Front()
	{
		return _MyList.GetItem(0);
	}
	int Back()
	{
		return _MyList.GetItem(_MyList.Size()-1);
	}
	void Pop()
	{
		_MyList.DeleteingFirstNode();
	}

	int GetItem(int Index)
	{
		return _MyList.GetItem(Index);
	}

	void Revers()
	{
		_MyList.Revers();
	}

	void UpdateItem(int indexUpate , T NewItem)
	{
		_MyList.UpdateItem(indexUpate, NewItem);
	}

	void InsertAfter(int Index , T NewItem)
	{
		_MyList.InsertAfter(Index, NewItem);
	}
	void InsertAtTheFront(T Val)
	{
		_MyList.InsertAtBeginning(Val);
	}
};

