#include <iostream>
#include <queue>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "enter the data : "<<endl;
    int data;
    cin >> data;

    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "enter the data for the left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "enter the data for the right  of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);


    while (!q.empty()){
        Node *temp = q.front();
        q.pop();

        if (temp == NULL){
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else {
            cout << temp->data << " ";
            if (temp->left){
                q.push(temp->left);
            }
            if (temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

// 1 2 3 -1 -1 4 -1 -1 5 -1 -1
int main()
{

    Node *root = NULL;
    root = buildTree(root);

    cout<<"LevelOrder traversal :"<<endl;
    levelOrderTraversal(root);

    cout<<"InOrder traversal :-  ";
    inOrderTraversal(root);

    cout<<endl<<"PreOrder traversal :-  ";
    preOrderTraversal(root);

    cout<<endl<<"PostOrder traversal :-  ";
    postOrderTraversal(root);

    return 0;
}