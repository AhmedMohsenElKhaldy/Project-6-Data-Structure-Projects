#pragma once
#include<iostream>
#include"ClsMyQueue.h"
using namespace std;

template<class T>
class ClsMyStack : public ClsMyQueue<T>
{

	
public:
	void Push(T Value)
	{
		ClsMyQueue <T> ::_MyList.InsertAtBeginning(Value);
	}
	
	
	int Top()
	{
		return ClsMyQueue<T> :: Front();
	}
	int Botton()
	{
		return ClsMyQueue<T>::Back();
	}
	

	
};

