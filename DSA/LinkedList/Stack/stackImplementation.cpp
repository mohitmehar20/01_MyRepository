#include<iostream>
using namespace std;

class Stack{
    public:

    int *arr;
    int top;
    int size;

    Stack(int size){

        this->size = size;
        arr = new int[size];
        top = -1;
        
    }

    void push(int element){
        if (size - top > 0)
        {

            top++;
            arr[top] = element;
        }else{

            cout<<"stack overflow"<<endl;
            return;
        }   
    }

    void pop(){
        if (top >= 0)
        {
            top--;   
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    bool isEmpty(){

        if (top == -1) {
            return false;
        }
        else{
            return true;
        }
    }

    int top(){
        if (top == -1)
        {
            return -1;
        }else{
            // cout<<arr[top]<<endl;
            return arr[top];
        }
    }
};


int main() {

    Stack st(3);
    

return 0;
}