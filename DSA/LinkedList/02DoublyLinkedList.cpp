#include<iostream>
using namespace std;

class Node{
    public:
    Node* prev;
    int data;
    Node* next;

    Node(int data){
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int value = data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory freee for the Node with the value "<<value<<endl;
        
    }
};

void InsertAtHead(Node *&head, int d)
{

    Node *temp = new Node(d);
    head->prev = temp;
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&head, int d)
{
    Node* curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    
    Node *temp = new Node(d);
    temp->prev = curr;
    curr->next = temp;
}

void InsertAtMiddle(Node *&head, int position, int d)
{
    if (position == 1)
    {
        InsertAtHead(head,d);
        return;
    }
    
    Node* temp = head;
    for (int i = 1; i < position-1; i++)
    {
        temp = temp->next;
    }
    
    
    Node *newNode = new Node(d);
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = newNode;

}

void deleteNode(){
    
}

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

int main() {

    Node *head = new Node(10);

    InsertAtHead(head,9);
    print(head);
    InsertAtHead(head,8);
    print(head);
    InsertAtHead(head,7);
    print(head);

    InsertAtMiddle(head,3 ,20);
    print(head);

    InsertAtTail(head, 23);
    print(head);

    cout<<"head = "<<head->data;

return 0;
}