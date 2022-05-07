#include <iostream>

template <typename T>
class LinkedList
{
    struct Node
    {
        T value;
        Node *next;
    }; // struct LinkedList

    Node *head = nullptr;
public:
    
    class Iterator
    {
        Node *_ptr;
    
        public:
            Iterator(Node *ptr) : _ptr(ptr) {}

            T& operator*(){
                return _ptr->value;
            }
    };

    Iterator begin()
    {
        return Iterator(head);
    }

    bool addNode(T value)
    {
        Node *tail = new Node{value, nullptr};
        if(head == nullptr)
        {
            head = tail;
            return true;
        }
        Node *ptr = head;
        while(ptr->next != nullptr)
        {
            ptr=ptr->next;
        }
        ptr->next = tail;
        return true;
    }
};

int main(){
    LinkedList<int> ll;
    ll.addNode(1);
    ll.addNode(2);
    ll.addNode(3);

    std::cout << *(ll.begin()) << std::endl;
}