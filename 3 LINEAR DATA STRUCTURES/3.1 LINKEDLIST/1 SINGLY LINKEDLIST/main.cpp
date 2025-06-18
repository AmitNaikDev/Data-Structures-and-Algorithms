#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        
        Node(int data)  // constructor is created to initialize a newnode when it is created
        {
            this->data=data;
            this->next = NULL;
        }
        
        ~Node()
        {
            int value = this->data ;
            
            Node* current = this ;
            Node* nextNode;
            
            while(current!=NULL)
            {
                nextNode=current->next;
                delete current;
                current= nextNode;
            }
            
            cout<<"Memory is free for Node with data : "<<value<<endl;
        }
};

void InsertAtHead(Node *&head,int d)
{
    Node *temp = new Node(d);
    temp->next= head;
    head = temp;
}

void InsertAtTail(Node *&tail,int d)
{
    Node *temp = new Node(d);
    tail->next = temp ; // points at tail
    tail = tail->next ; // fetches the data 
}

void InsertAtPosition(Node *&head,Node *&tail,int position,int d)
{
    if(position==1) // inserting at head
    {
        InsertAtHead(head,d);
        return ;
    }
    
    Node *temp = head ;
    int count = 1 ;
    
    while(count<position-1)
    {
        temp = temp->next;
        count++ ;
    }
    
    if(temp->next==NULL) // insert at tail
    {
        InsertAtTail(tail ,d) ;
        return ;
    }
    
    // Creating a Node for d 
    
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next ;
    temp->next=nodeToInsert ;
}

void DeleteNode(int position , Node *&head)
{
    if(head == NULL || position<= 0)
    {
        cout<< "Invslid Position Or Empty List.\nDeletion Failed ."<<endl;
        return ;
    }
    
    if(position == 1)
    {
        Node *temp = head ;
        head = head -> next ;
        delete temp ;  // frees memory of the first node
    }
    else  // for deleting any node or last node 
    {
        Node *current = head;
        Node *prev = NULL ;
        
        int count = 1 ;
        while(current!=NULL && count< position)
        {
            prev =current ;
            current  = current->next ;
            count++;
        }
        if (current == NULL)
        {
            cout << "Invalid position. Deletion failed." << endl;
            return;
        }
        prev->next = current->next ;
        delete current ;
    }
}

void Printlist(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";  // Prints data of the current Node
        temp = temp->next ;     // Move's to the next node ;
    }
}

Node *ReverseLinkedList(Node *head)
{
    if(head == NULL || head->next == NULL) // when there is no head  OR only one Node present in the Linked List
    {
        return head ; 
    }
    
    Node *previous = NULL;
    Node *current = head;
    Node *forward = NULL ;
    
    while(current!= NULL)
    {
        forward = current->next ;
        current->next = previous ;
        previous = current ;
        current = forward ;
    }
    return previous ;
}


int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    cout << node1->data << endl;
    cout << node1->next << endl;  
    InsertAtHead(head, 5);
    InsertAtTail(tail, 25);
    Printlist(head);
    cout << endl;
    InsertAtPosition(head, tail, 3, 43);
    ReverseLinkedList(head);
    head = ReverseLinkedList(head);
    Printlist(head);
    return 0;
}



