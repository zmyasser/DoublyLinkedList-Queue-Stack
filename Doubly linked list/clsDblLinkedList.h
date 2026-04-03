#pragma once
#include <iostream>
#include <stdexcept>

template <typename T>
class clsDblLinkedList
{
protected:
    size_t _Size = 0;

public:

    struct Node
    {
        T value;
        Node* next = nullptr;
        Node* prev = nullptr;
    };

    Node* head = nullptr;
    Node* tail = nullptr;

    // ================= INSERT =================

    void InsertAtBeginning(const T& value)
    {
        Node* newNode = new Node{ value, head, nullptr };

        if (head != nullptr)
            head->prev = newNode;
        else
            tail = newNode; // first node

        head = newNode;
        _Size++;
    }

    void InsertAtEnd(const T& value)
    {
        Node* newNode = new Node{ value, nullptr, tail };

        if (tail != nullptr)
            tail->next = newNode;
        else
            head = newNode; // first node

        tail = newNode;
        _Size++;
    }

    void InsertAfter(Node* current, const T& value)
    {
        if (!current) return;

        Node* newNode = new Node{ value, current->next, current };

        if (current->next != nullptr)
            current->next->prev = newNode;
        else
            tail = newNode; // inserting at end

        current->next = newNode;
        _Size++;
    }

    bool InsertAfter(size_t index, const T& value)
    {
        Node* node = GetNode(index);
        if (!node) return false;

        InsertAfter(node, value);
        return true;
    }

    // ================= PRINT =================

    void PrintList() const
    {
        Node* current = head;

        while (current != nullptr)
        {
            std::cout << current->value << " ";
            current = current->next;
        }

        std::cout << "\n";
    }

    // ================= FIND =================

    Node* Find(const T& value) const
    {
        Node* current = head;

        while (current != nullptr)
        {
            if (current->value == value)
                return current;

            current = current->next;
        }

        return nullptr;
    }

    // ================= DELETE =================

    void DeleteNode(Node*& node)
    {
        if (!node) return;

        if (node == head)
            head = node->next;

        if (node == tail)
            tail = node->prev;

        if (node->next)
            node->next->prev = node->prev;

        if (node->prev)
            node->prev->next = node->next;

        delete node;
        node = nullptr;
        _Size--;
    }

    void DeleteFirstNode()
    {
        if (!head) return;

        Node* temp = head;
        head = head->next;

        if (head)
            head->prev = nullptr;
        else
            tail = nullptr;

        delete temp;
        _Size--;
    }

    void DeleteLastNode()
    {
        if (!tail) return;

        Node* temp = tail;
        tail = tail->prev;

        if (tail)
            tail->next = nullptr;
        else
            head = nullptr;

        delete temp;
        _Size--;
    }

    void Clear()
    {
        while (head)
            DeleteFirstNode();
    }

    // ================= UTIL =================

    void Reverse()
    {
        Node* current = head;
        Node* temp = nullptr;

        while (current)
        {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }

        if (temp)
        {
            temp = temp->prev;
            std::swap(head, tail);
        }
    }

    size_t Size() const
    {
        return _Size;
    }

    bool IsEmpty() const
    {
        return _Size == 0;
    }

    // ================= ACCESS =================

    Node* GetNode(size_t index) const
    {
        if (index >= _Size)
            return nullptr;

        Node* current = head;
        size_t counter = 0;

        while (current)
        {
            if (counter == index)
                return current;

            current = current->next;
            counter++;
        }

        return nullptr;
    }

    T GetItem(size_t index) const
    {
        Node* node = GetNode(index);

        if (!node)
            throw std::out_of_range("Invalid index");

        return node->value;
    }

    bool UpdateItem(size_t index, const T& newValue)
    {
        Node* node = GetNode(index);

        if (!node) return false;

        node->value = newValue;
        return true;
    }
};