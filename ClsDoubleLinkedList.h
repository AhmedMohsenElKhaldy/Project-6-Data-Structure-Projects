#pragma once
#include<iostream>
using namespace std;

template<class T>

class ClsDoubleLinkedList
{
private:
	int _Size = 0;
public:
	class Node
	{
	public:
		T Value;
		Node* Next;
		Node* Prev;

	};

	Node* Head = NULL;

	void InsertAtBeginning(T Value)
	{
		Node* New_Node = new Node();
		New_Node->Value = Value;

		New_Node->Next = Head;
		New_Node->Prev = NULL;

		if (Head != NULL)
		{
			Head->Prev = New_Node;
		}
		Head = New_Node;
		_Size ++;

	}

	Node* Find(T Value)
	{
		Node* Current = Head;
		while (Current != NULL)
		{
			if (Current->Value == Value)
			{
				return Current;
			}
			Current = Current->Next;
		}
		delete Current;

		return NULL;
	}

	void InsertAfter(Node*& Prv_Node, T Value)
	{
		Node* New_Node = new Node();
		New_Node->Value = Value;

		New_Node->Next = Prv_Node->Next;
		Prv_Node->Next = New_Node;   // 1 2 3 4 8  500
		if (Prv_Node != NULL)
		{
			Prv_Node->Next->Prev = New_Node;
		}

		New_Node->Prev = Prv_Node;
		_Size++;
		return;
	}

	void InsertAtEnd(T Value)
	{
		Node* New_Node = new Node();

		New_Node->Value = Value;
		New_Node->Next = NULL;

		if (Head == NULL)
		{
			Head = New_Node;
			_Size++;
			return;
		}

		Node* LastNode = Head;

		while (LastNode->Next != NULL)
		{
			LastNode = LastNode->Next;
		}

		LastNode->Next = New_Node;
		New_Node->Prev = LastNode;
		_Size++;

		return;

	}
	void DeleteNode(Node* NodeToDelete)
	{

		if (Head == NULL || NodeToDelete == NULL)
		{
			return;
		}
		// 1 2 3 4
		if (NodeToDelete->Next != NULL)
		{
			NodeToDelete->Next->Prev = NodeToDelete->Prev;

		}

		if (NodeToDelete->Prev != NULL)
		{
			NodeToDelete->Prev->Next = NodeToDelete->Next;
		}

		delete NodeToDelete;
		_Size--;
	
		return;
	}
	void DeleteingFirstNode()
	{
		if (Head == NULL)return;
		// 1 2 3 4 
		Node* CurrentNode = Head;
		Head = Head->Next;
		if (Head != NULL)
		{
		Head->Prev = NULL;
		}
		delete CurrentNode;
	}
	void DeleteingLastNode()
	{
		if (Head == NULL)return;

		if (Head->Next == NULL)
		{
			Head = NULL;
			delete Head;
		}

		Node* Last_Node = Head;
		while (Last_Node->Next != NULL)
		{
			Last_Node = Last_Node->Next;
		}


		Last_Node->Prev->Next = NULL;
		delete Last_Node;
		_Size--;
		return;
	}

	void PrintNode()
	{
		Node* Current = Head;

		while (Current != NULL)
		{
			cout << Current->Value << " ";
			Current = Current->Next;
		}
		delete Current;
		cout << endl;
	}
	int Size()
	{
		return _Size;
    }

	bool IsEmpty()
	{
		return (_Size == 0 ? true : false);
	}

	void Clear()
	{
		while (_Size > 0)
		{
			DeleteingFirstNode();
			_Size--;
		}
	}
	void Revers()
	{
		Node* Temp = nullptr;
		Node* CurrentNode = Head;

		while (CurrentNode != nullptr)
		{
			Temp = CurrentNode->Prev;
			CurrentNode->Prev = CurrentNode->Next;
			CurrentNode->Next = Temp;
			CurrentNode = CurrentNode->Prev;
		}

		if (Temp->Prev != nullptr)
		{
			Head = Temp->Prev;
		}

		
	}

	Node* GetNode(int Index)
	{

		Node* CurrentNode = Head;
		if (Index > _Size - 1 || Index < 0)return NULL;


		int Counter = 0;
		while(CurrentNode != NULL && CurrentNode->Next != NULL)
		{
			if (Counter == Index)break;


			CurrentNode = CurrentNode->Next;
			Counter++;// 1
		}
	return CurrentNode;
	}

	T GetItem(int Index)
	{
		Node* N1 = GetNode(Index);
		if (N1 == NULL) return NULL;
		
		return N1->Value;
	}

	void UpdateItem(int Index, T UpdateNumber)
{
		Node* NDelete = GetNode(Index);
		
		if (NDelete != NULL)
		{
			NDelete->Value = UpdateNumber;
			return;
		}
		return;
}
	void InsertAfter(int Index, T Value)
	{
		Node* Prev = GetNode(Index);
		if (Prev == NULL)return ;
		InsertAfter(Prev, Value);
		return;
	}
};

