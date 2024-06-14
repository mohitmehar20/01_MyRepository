#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
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
        cout << "memory is free for the node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{

    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
        return;
    }

    Node *curr = tail;
    while (curr->data != element)
    {
        curr = curr->next;
    }
    Node *newNode = new Node(d);
    newNode->next = curr->next;
    curr->next = newNode;
}

void deleteNode(Node *&tail, int element)
{

    if (tail == NULL)
    {
        cout << "list is empty";
    }

    Node *prev = tail;
    Node *curr = prev->next;

    while (curr->data != element)
    {
        prev = curr;
        curr = curr->next;
    }

    if (tail == curr)
    {
        tail = prev;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

void print(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

int main()
{

    Node *tail = NULL;

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 6, 7);
    print(tail);

    insertNode(tail, 7, 8);
    print(tail);

    insertNode(tail, 8, 9);
    print(tail);

    insertNode(tail, 6, 10);
    print(tail);

    deleteNode(tail, 9);
    print(tail);
    cout << "Tail = "<<tail->data << endl;

    deleteNode(tail, 10);
    print(tail);
    cout << "Tail = "<<tail->data << endl;

    deleteNode(tail, 6);
    print(tail);
    cout << "Tail = "<<tail->data << endl;

    return 0;
}