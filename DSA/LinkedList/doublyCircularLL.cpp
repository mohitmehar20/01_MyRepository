#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for Node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        newNode->prev = newNode;
        newNode->next = newNode;
        tail = newNode;
        return;
    }

    Node *curr = tail;

    while (curr->data != element)
    {
        curr = curr->next;
    }

    Node *newNode = new Node(d);
    newNode->next = curr->next;
    newNode->prev = curr;
    curr->next->prev = newNode;
    curr->next = newNode;
}

void print(Node *tail)
{
    if (tail == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    
    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

void deleteNode(Node *&tail, int element)
{
    if (tail == NULL)
    {
        cout << "List is already empty" << endl;
        return;
    }
    if (tail->next == tail)
    {
        tail ->next = NULL;
        tail ->prev = NULL;
        delete tail;
        tail = NULL;
        return;
    }
    Node *curr = tail;

    while (curr->data != element)
    {
        curr= curr->next;
    }
    if (curr == tail)
    {
        tail = curr->prev;
    }
    
    curr->next->prev = curr->prev;
    curr->prev->next = curr->next;
    curr->next = NULL;
    curr->prev = NULL;

    delete curr;
}

int main()
{

    Node *tail = NULL;

    print(tail);

    insertNode(tail, 3, 10);
    print(tail);

    insertNode(tail, 10, 11);
    print(tail);

    insertNode(tail, 10, 12);
    print(tail);

    insertNode(tail, 12, 14);
    print(tail);

    deleteNode(tail, 10);
    print(tail);
    cout << "tail = "<<tail->data<<endl;

    deleteNode(tail, 11);
    print(tail);
    cout << "tail = "<<tail->data<<endl;

    deleteNode(tail, 12);
    print(tail);
    cout << "tail = "<<tail->data<<endl;

    deleteNode(tail, 14);
    print(tail);
    cout << "tail = "<<tail->data<<endl;

    return 0;
}