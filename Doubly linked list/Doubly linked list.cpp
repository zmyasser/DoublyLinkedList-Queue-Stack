

#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"

int main()
{

    // ================= Linked List =================

    clsDblLinkedList<int> MyDblLinkedList;

    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtBeginning(1);

    std::cout << "Linked List: \n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.InsertAfter(4, 500);

    std::cout << "\nLinked List after adding new item 500: \n";
    MyDblLinkedList.PrintList();

    std::cout << "\n\n===================================================";







    // ================= Queue =================

    clsMyQueue<int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);


    std::cout << "\nQueue: \n";
    MyQueue.Print();

    std::cout << "\nQueue Size: " << MyQueue.Size();
    std::cout << "\nQueue Front: " << MyQueue.front();
    std::cout << "\nQueue Back: " << MyQueue.back();

    MyQueue.pop();

    std::cout << "\n\nQueue after pop() : \n";
    MyQueue.Print();

    //Extension #1
    std::cout << "\n\nItem(2) : " << MyQueue.GetItem(2);

    //Extension #2
    MyQueue.Reverse();
    std::cout << "\n\nQueue after reverse() : \n";
    MyQueue.Print();

    //Extension #3
    MyQueue.UpdateItem(2, 600);
    std::cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueue.Print();

    //Extension #4
    MyQueue.InsertAfter(2, 800);
    std::cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyQueue.Print();


    //Extension #5
    MyQueue.InsertAtFront(1000);
    std::cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyQueue.Print();

    //Extension #6
    MyQueue.InsertAtBack(2000);
    std::cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyQueue.Print();

    //Extension #7
    MyQueue.Clear();
    std::cout << "\n\nQueue after Clear(): \n";
    MyQueue.Print();

    std::cout << "\n\n===================================================";




    // ================= Stack =================

    clsMyStack<int> MyStack;

    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);


    std::cout << "\nStack: \n";
    MyStack.Print();

    std::cout << "\nStack Size: " << MyStack.Size();
    std::cout << "\nStack Top: " << MyStack.Top();
    std::cout << "\nStack Bottom: " << MyStack.Bottom();

    MyStack.pop();

    std::cout << "\n\nStack after pop() : \n";
    MyStack.Print();

    //Extension #1
    std::cout << "\n\nItem(2) : " << MyStack.GetItem(2);

    //Extension #2
    MyStack.Reverse();
    std::cout << "\n\nStack after reverse() : \n";
    MyStack.Print();

    //Extension #3
    MyStack.UpdateItem(2, 600);
    std::cout << "\n\nStack after updating Item(2) to 600 : \n";
    MyStack.Print();

    //Extension #4
    MyStack.InsertAfter(2, 800);
    std::cout << "\n\nStack after Inserting 800 after Item(2) : \n";
    MyStack.Print();


    //Extension #5
    MyStack.InsertAtFront(1000);
    std::cout << "\n\nStack after Inserting 1000 at top: \n";
    MyStack.Print();

    //Extension #6
    MyStack.InsertAtBack(2000);
    std::cout << "\n\nStack after Inserting 2000 at bottom: \n";
    MyStack.Print();

    //Extension #7
    MyStack.Clear();
    std::cout << "\n\nStack after Clear(): \n";
    MyStack.Print();



    std::cin.get();
}