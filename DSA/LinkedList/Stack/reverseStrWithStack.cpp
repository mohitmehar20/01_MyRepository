#include<iostream>
using namespace std;

class Stack{
    public:

    char *arr;
    int top;
    int size;

    Stack(int size){

        this->size = size;
        arr = new char[size];
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

    char pop(){
        if (top >= 0)
        {
            char val = arr[top]; 
            top--;
            return val;  
        }
        else{
            return -1;
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
};


string reverse(string str){
    Stack st(str.length());
    
    for (int i = 0; i < str.length(); i++)
    {
        st.push(str[i]);
    }
    
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = st.pop();
    }

    return str;
    
}


int main() {

    string name = "mohit";

    cout<<reverse(name);

return 0;
}