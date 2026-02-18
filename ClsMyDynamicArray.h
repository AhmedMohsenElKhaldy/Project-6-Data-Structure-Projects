#pragma once
#include<iostream>
using namespace std;
template<class T>
class ClsMyDynamicArray
{
protected:
	int _Size;

public:
	T* OriginalArray;
	T* TempArray;

	ClsMyDynamicArray(int Size =0)
	{
		if (Size < 0)
		{
			_Size = 0;
		}
		_Size = Size;

		OriginalArray = new T[_Size];
	}
	~ClsMyDynamicArray()
	{
		delete[] OriginalArray;
	}
	int GetSize()
	{
		return _Size;
	}
	bool SetItem(int Index, T Value)
	{
		if (Index < 0 || Index >= _Size)
		{
			return false;
		}

		OriginalArray[Index] = Value;
		return true;
	}
	bool IsEmpty()
	{
		return (_Size == 0 ? true : false);
	}
	void Resize(int Size)
	{
		if (Size < 0 || Size > _Size) return;

		T* NewArray = new T[Size];
		for (int i = 0; i < Size; i++)
		{
			NewArray[i] = OriginalArray[i];
		}

		delete[] OriginalArray;
		OriginalArray = NewArray;
		_Size = Size;
		return;
	}
	T GetItem(int Index)
	{
		if (Index > _Size || Index < 0) return 0;
		return OriginalArray[Index];
	}
	void Revers()
	{
		TempArray = new T[_Size];
		int Counter = 0;

		for (int i = _Size -1;i >= 0; i--)
		{
			TempArray[Counter] = OriginalArray[i];
			Counter++;
		}
		delete[] OriginalArray;
		OriginalArray = TempArray;
	}
	void Clear()
	{
		_Size = 0;
		TempArray = new T[0];
		delete[] OriginalArray;
		OriginalArray = TempArray;

	}
	bool DeleteingByIndex(int Index)
	{
		_Size--;
		TempArray = new T[_Size];
	
		if (Index < 0 || Index > _Size)
		{
			return false;
		}

		for (int i = 0; i < Index; i++)
		{
			TempArray[i] = OriginalArray[i]; // {[1, 2], 3, 4, 5}
		
		}

		for (int i = Index+1 ; i < _Size+1; i++)
		{
			TempArray[i - 1] = OriginalArray[i]; // {1,2, 3, [4, 5]}

		}

		//	int Counter = 0;
		//
		//for (int i = 0; i < _Size; i++)
		//{
		//	
		//	if (OriginalArray[i] != GetItem(Index))
		//	{
		//		// 1 2 3 4 
		//		TempArray[Counter] = OriginalArray[i];
		//		Counter++;
		//	 
		//	}
		
		delete[] OriginalArray;
		OriginalArray = TempArray;
	}
	void DeleteFirstItem()
	{
		DeleteingByIndex(0);
	}
	void DeleteLastItem()
	{
		DeleteingByIndex(_Size-1);
	}
	int Find(T Value)
	{
		for (int i = 0; i < _Size; i++)
		{
			if (OriginalArray[i] == Value)
			{
				return i;
			}
		}
	
		return -1;
	}
	bool DeleteingItemByValue(T Value)
	{
		int Index = Find(Value);
		if (Index == -1)return false;
	
	
		DeleteingByIndex(Index);
		return true;
	}
	void InsertAt(int Index, T Value)
	{
		_Size++;
		TempArray = new T[_Size];

		for (int i = 0;i < Index; i++)
		{
			TempArray[i] = OriginalArray[i];
		}

		TempArray[Index] = Value;
	
		// [1,2,500,3,4,5]
		
		for (int i = Index ;i < _Size-1	; i++)
		{
			TempArray[i+1] = OriginalArray[i ];
		}
		delete[] OriginalArray;
		OriginalArray = TempArray;
	}

	void InsertAtBeginning(T Value)
	{
		InsertAt(0, Value);

	}
	void InsertAtEnd(T Value)
	{
		InsertAt(_Size , Value);
	}
	void InsertAfter(int Index, T Value)
	{
		InsertAt(Index+1, Value);
	}
	void Print()
	{
		for (int i = 0;i < _Size; i++)
		{
			cout << OriginalArray[i] << endl;
		}

		cout << "\n------------------------------\n";
	}
};

