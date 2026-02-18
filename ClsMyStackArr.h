#pragma once
#include<iostream>
#include"ClsMyDynamicArray.h"


template<class T>
class ClsMyStackArr
{
protected:
	ClsMyDynamicArray<T> _MyStackArr;

public:

	void Push(T Value)
	{
		_MyStackArr.InsertAtEnd(Value);

	}


	void Print()
	{
		_MyStackArr.Print();
	}

	int GetSize()
	{
		return _MyStackArr.GetSize();
	}
	T Front()
	{
		return _MyStackArr.GetItem(0);
	}

	T Back()
	{
		return _MyStackArr.GetItem(GetSize() - 1);
	}
	void Pop()
	{
		_MyStackArr.DeleteFirstItem();
	}
	T GetItem(int Index)
	{
		return _MyStackArr.GetItem(Index);
	}
	void Reverse()
	{
		_MyStackArr.Revers();
	}
	void UpdateItem(int Index, T Value)
	{
		_MyStackArr.DeleteingByIndex(Index);
		_MyStackArr.InsertAt(Index, Value);
	}

	void InsertAfter(int Index, T Value)
	{
		_MyStackArr.InsertAfter(Index, Value);
	}
	void InsertAtBeginning(T Value)
	{
		_MyStackArr.InsertAtBeginning(Value);
	}

	void InsertAtEnd(T Value)
	{
		_MyStackArr.InsertAtEnd(Value);
	}

};

