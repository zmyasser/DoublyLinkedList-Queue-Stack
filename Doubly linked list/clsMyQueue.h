#pragma once
#include <iostream>
#include "clsDblLinkedList.h"


template <class T>
class clsMyQueue
{

protected:

	clsDblLinkedList <T> _MyList;

public:

	void push(const T& Item)
	{
		_MyList.InsertAtEnd(Item);
	}

	void pop()
	{
		_MyList.DeleteFirstNode();
	}

	void Print() const 
	{
		_MyList.PrintList();
	}

	int Size() const
	{
		return _MyList.Size();
	}

	bool IsEmpty() const
	{
		return _MyList.IsEmpty();
	}

	const T& front() const
	{
		if (_MyList.IsEmpty())
		{
			throw std::out_of_range("Queue is empty");
		}

		return _MyList.GetItem(0);
	}

	const T& back() const
	{
		if (_MyList.IsEmpty())
		{
			throw std::out_of_range("Queue is empty");
		}

		return _MyList.GetItem(Size() - 1);
	}

	const T& GetItem(size_t Index) const
	{
		return _MyList.GetItem(Index);
	}

	void Reverse()
	{
		_MyList.Reverse();
	}

	bool UpdateItem(size_t Index, const T& NewValue)
	{
		return _MyList.UpdateItem(Index, NewValue);
	}

	bool InsertAfter(size_t Index, const T& NewValue)
	{
		return _MyList.InsertAfter(Index, NewValue);
	}

	void InsertAtFront(const T& Value)
	{
		_MyList.InsertAtBeginning(Value);
	}

	void InsertAtBack(const T &Value)
	{
		_MyList.InsertAtEnd(Value);
	}

	void Clear()
	{
		_MyList.Clear();
	}

};

