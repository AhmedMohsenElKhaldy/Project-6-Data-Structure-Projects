#pragma once
#include"ClsMyDynamicArray.h"

template<class T>
class ClsMyQueueArr : public ClsMyDynamicArray<T>
{
protected:
	ClsMyDynamicArray<T> _MyDynamicArr;
	
public:

	void Push(T Value)
	{
		_MyDynamicArr.InsertAtEnd(Value);
		
	}


	void Print()
	{
		_MyDynamicArr.Print();
	}

	int GetSize()
	{
		return _MyDynamicArr.GetSize();
	}
	T Front()
	{
		return _MyDynamicArr.GetItem(0);
	}

	T Back()
	{
		return _MyDynamicArr.GetItem(GetSize()-1);
	}
	void Pop()
	{
		_MyDynamicArr.DeleteFirstItem();
	}
	T GetItem(int Index)
	{
		return _MyDynamicArr.GetItem(Index);
	}
	void Reverse()
	{
		_MyDynamicArr.Revers();
	}
	void UpdateItem(int Index, T Value)
	{
		_MyDynamicArr.DeleteingByIndex(Index);
		_MyDynamicArr.InsertAt(Index, Value);
	}

	void InsertAfter(int Index , T Value)
	{
		_MyDynamicArr.InsertAfter(Index, Value);
	}
	void InsertAtBeginning( T Value)
	{
		_MyDynamicArr.InsertAtBeginning(Value);
	}

	void InsertAtEnd(T Value)
	{
		_MyDynamicArr.InsertAtEnd(Value);
	}
};

