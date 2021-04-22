#ifndef SINGLY_LINKED_LIST_GUARD
#define SINGLY_LINKED_LIST_GUARD

class LinkedList {

private:
    struct node {
        node(int x_) : x(x_) {}
        int x;
        node* next;
    };

public:
    LinkedList() : size_(0), head_(nullptr), tail_(nullptr)  {}
    ~LinkedList() {}

    inline int size() { return size_; }
    inline bool empty() {return size_ <= 0;}

    void push(int x) 
    {
        if(head_ == nullptr) 
        {
            head_ = new node(x);
            head_ = tail_;
        }
        else 
        {
            node* temp = new node(x);
            temp->next = head_;
            head_ = temp;
        }
        size_++;
    }
    void push_back(int x) 
    {
        if(empty())
        {
            head_ = new node(x);
            head_ = tail_;
        }
        else
        {
            node* temp = new node(x);
            tail_->next = temp;
        }
        size_++;
    }
    void pop() 
    {
        if(head_ == nullptr)
            return;
        
        node* temp = head_->next;
        head_ = temp;
        delete head_;
    }

    void print()
    {
        
    }

private:
    int size_;
    node* head_;
    node* tail_;
    
};

#endif