#include<iostream>
#include<queue>
using namespace std;

class Queue
{
    public :
        int*array;
        int front ;
        int rear;
        int size ;
        
    Queue()
    {
        size = 10000;
        array = new int[size];
        front = 0;
        rear = 0 ;
    }
      
    bool isEmpty()
    {
        if(front == rear)
        {
            return true;
        }
        else
        {
            return false ;
        }
    }
    
    void EnQueue(int data)
    {
        if(rear==size)
        {
            cout<<"Queue Is Full"<<endl;
        }
        else
        {
            array[rear] = data;
            rear++;
        }
    }
    
    int DeQueue()
    {
        if(front == rear)
        {
            cout<<"Queue is Empty"<<endl ;
            return -1 ;
        }
        else
        {
            int ans = array[front];
            array[front]=-1;
            front++ ;
        
        if(front==rear)
        {
            front = 0;
            rear = 0 ;
        }
        return ans ;
        }
    }
    int Front()
    {
        if(front == rear)
        {
            return -1 ;
        }
        else
        {
            return array[front];
        }
    }
  
};


int main()
{
    Queue Q ;
    Q.EnQueue(5);
    Q.EnQueue(4);
    Q.EnQueue(3);
    Q.EnQueue(2);
    Q.EnQueue(1);
    Q.EnQueue(0);
    cout<<Q.Front()<<endl ;
    Q.DeQueue();
    
    while(!Q.isEmpty())
    {
        Q.DeQueue();
    }
    cout<<Q.Front()<<endl ;
    
    
    
}
