#include<iostream>
#include<stack>
using namespace std;

class Stack
{
    public:
        int top;       
        int *array;
        int size ;
    
    Stack(int size)
    {
        this->size = size ;
        array = new int[size] ; // Creating an array 
        top = -1   ;            // It inituially indicates that the stack is empty
    }

    
void push(int element)
{
    if(top+1<size)
    {
        top++;
        array[top]=element ;
    }
    else
    {
        cout<<"Stack Overflow "<<endl;
    }
}

void pop()
{
    if(top>=0)
    {
        top--;
    }
    else
    {
        cout<<"Stack Underflow";
    }
}

int peek()
{
    if(top>=0)
    {
        return array[top];
    }
    else
    {
        cout<<"Stack is empty" ;
    }
}

bool isEmpty()
{
    if(top==-1)
    {
        cout<<"Stack is empty";
        return true ;
    }
    else
    {
        return false;
    }
}

};

int main()
{
    int element ;
    Stack S(5);
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);
    cout<<"Top element of the stack is : "<<S.peek()<<endl;
    while(!S.isEmpty())
    {
        S.pop();
    }
    //cout<<"Top element of the stack is : "<<S.peek()<<endl;
    
}

