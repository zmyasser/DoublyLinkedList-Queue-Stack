#pragma once
#include <iostream>
#include "clsMyQueue.h"


template <class T>
class  clsMyStack :public clsMyQueue <T>
{

public:

	void push(const T& Item)
	{
		clsMyQueue<T>::_MyList.InsertAtBeginning(Item);
	}

	const T& Top() const 
	{
		if (clsMyQueue<T>::IsEmpty())
		{
			throw std::out_of_range("Stack is empty");
		}

		return clsMyQueue<T>::front();
	}

	const T& Bottom() const 
	{
		if (clsMyQueue<T>::IsEmpty())
		{
			throw std::out_of_range("Stack is empty");
		}

		return clsMyQueue<T>::back();
	}

};


