#ifndef SINGLY_LINKED_LIST_GUARD
#define SINGLY_LINKED_LIST_GUARD

#include <iostream>
using namespace std;

class LinkedList {

private:
    struct node {
        int data;
        node* next;
    };

public:
    LinkedList() : size_(0), head_(nullptr), tail_(nullptr)  {}
    ~LinkedList() {}

    inline int size() { return size_; }
    inline bool empty() {return size_ <= 0;}

    void push(int x) 
    {
        node* temp = new node;
        temp->data = x;
        temp->next = head_;
        head_ = temp;
        size_++;
    }
    void push_back(int x) 
    {
        if(empty())
        {
            head_ = new node;
            head_ = tail_;
        }
        else
        {
            node* temp = new node;
            tail_->next = temp;
        }
        size_++;
    }
    void pop() 
    {
        if(head_ == nullptr)
            return;
        
        node* temp = head_;
        head_ = head_->next;
        delete temp;
    }

    void print()
    {
        auto temp = head_;
        if(temp == nullptr) {
            std::cout << "empty";
        }
        while(temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
         }
         std::cout << "\n";
    }

private:
    int size_;
    node* head_;
    node* tail_;
    
};

#endif