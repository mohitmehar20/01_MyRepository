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

// <----all Insertion methods----->

void InsertAtHead(Node *&head, int d)
{

    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtMiddle(Node *&head, Node *&tail, int position, int d)
{

    Node *newNode = new Node(d);
    Node *temp = head;

    // inserting at start

    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }

    // Inserting at the end

    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// <-------All deletion method------>

void DeleteNode(Node *&head, Node* &tail, int position)
{
    // Delete the start node
    if (position == 1)
    {

        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    // delete the middle and end node
    else
    {
        Node *prev = NULL;
        Node *curr = head;

        for (int i = 1; i < position; i++)
        {
            prev = curr;
            curr = curr->next;
        }

        if (curr->next == NULL)
        {
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
            tail = prev;
            return;
        }
        

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *head)
{

    // using recursion method

    // if (head->next == NULL)
    // {
    //     cout<< head->data;
    //     return;
    // }

    // cout<<head->data << " ";
    // print(head->next);

    // using itrative method
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *head = new Node(10);
    Node *tail = head;

    InsertAtHead(head, 11);
    print(head);

    InsertAtMiddle(head, tail, 2, 21);
    print(head);

    InsertAtTail(tail, 89);
    print(head);

    InsertAtTail(tail, 96);
    print(head);

    InsertAtMiddle(head, tail, 6, 21);
    print(head);

    DeleteNode(head,tail, 3);
    print(head);

    DeleteNode(head,tail, 2);
    print(head);
    DeleteNode(head,tail, 1);
    print(head);
    DeleteNode(head,tail, 3);
    print(head);

    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    return 0;
}