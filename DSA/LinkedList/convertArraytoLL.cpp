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

void print(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ---> ";
        temp = temp->next;
    }
    cout<<"null"<<endl;
    
}

Node* convertToLL(int* arr , int n ){
    Node* head = new Node(arr[0]);
    Node* curr = head;
 
    for(int i = 1; i < n; i++){
        Node* next = new Node(arr[i]);
        curr->next = next;
        curr = next;
    }
    return head;
}
int main(){

    int arr[5] = {4, 5, 7, 8, 3};

    Node* head = convertToLL(arr, 5);
    print(head);

    return 0;
}