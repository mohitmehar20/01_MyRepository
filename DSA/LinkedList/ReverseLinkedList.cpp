#include<iostream>
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

void print(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void InsertAtTail(Node *&tail, int d)
{

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void reverseList(Node* &head){
    if(head == NULL || head->next == NULL){
        return;
    }

    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while (curr != NULL)    
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    
}

int main() {

    Node* head = new Node(3);
    Node* tail = head;

    InsertAtTail(tail, 4);
    InsertAtTail(tail, 5);
    InsertAtTail(tail, 7);
    InsertAtTail(tail, 9);

    print(head);

    reverseList(head);
    
    print(head);

return 0;
}