#pragma once
#include<iostream>
#include<stack>

using namespace std;

class ClsMyString
{
private:
	 string _Value;
	 stack <string>_Redo;
	 stack <string>_Undo;

public:
	void SetValue(string Value)
	{
		_Undo.push(_Value); // 1 2 3 
		_Value = Value;
	}
	string GetValue()
	{
		return _Value;
	}
	
	__declspec(property(get = GetValue, put = SetValue)) string Value;
	
	void Undo()
	{
		if (!_Undo.empty())
		{
			// Undo --> ; 
			// Redo --> "3" , "2" ," ";
		_Redo.push(_Value); // 1   
		_Value = _Undo.top(); // 4
		_Undo.pop(); //    
		
		} 
	
	}
	void Redo()
	{
		if (!_Redo.empty())
		{
			_Undo.push(_Value);
			_Value = _Redo.top(); 
			_Redo.pop();
		}

	}
	

};

