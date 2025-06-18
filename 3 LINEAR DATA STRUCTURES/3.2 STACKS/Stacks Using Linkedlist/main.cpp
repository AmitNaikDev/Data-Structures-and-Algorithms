#include<iostream>
using namespace std;

class Node
{   
    public:
        int data ;
        Node *next ;
    
    Node(int data)
    {
        this->data=data;
        this->next = NULL;
    }
};

class Stack 
{
    Node *top ;
    
    public:
        Stack()
        {
            top = NULL;
        }

void Push(int data)
{
    Node *temp = new Node(data); // a new node is createed for the new data 
    
    if(!temp)
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        
        temp->next = top ;
        top = temp;
    }
}

bool isEmpty()
{
    // If top is NULL it means that
    // there are no elements are in stack
    return top == NULL;
}
    
void Pop()
{
    Node *temp ;
    if(top==NULL)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        temp = top ;
        top = top->next;
        delete temp;
    }
}

int Peek()
{
    if(!isEmpty())
    {
        return top->data;
    }
    else
    {
        exit(1);
    }
}

int Display()
{
    Node *temp ;
    int count = 0 ;
    if(top==NULL)
    {
        cout<<"stack Underflow";
    }
    else
    {
        temp = top ;
        while(temp!= NULL)
        {
            count++;
            cout<<temp->data<<" ";
            temp = temp->next ; //increments to the next stack element
        }
        cout<<endl;
    }
  
    return count ;
}
};


int main()
{
   
    Stack S;
    S.Push(1);
    S.Push(2);
    S.Push(3);
    S.Push(4);
    S.Push(5);
    cout<<"Top element of the stack is : "<<S.Peek()<<endl;
    cout<<"Elements of the stack are : "<<S.Display()<<endl ;
    S.Pop();
    cout<<"Elements of the stack are : "<<S.Display()<<endl ;
    while(!S.isEmpty())
    {
        S.Pop();
    }
    cout<<"Top element of the stack is : "<<S.peek()<<endl;
    
}


