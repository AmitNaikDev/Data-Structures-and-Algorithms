#include<iostream>
using namespace std;
class Node 
{
    public:
        int data;
        Node* left  ;
        Node* right ;
        
    Node(int d)
    {
        this->data=data;
        this->left=NULL;
        this->right = NULL ;
        
    }    
};

Node *InsertIntoBST(Node* &root,int d)
{
    if(root==NULL)  // base class if no node is present it creates a new node
    {
        root = new Node(d);
        return root;
    }
    
    if(d> root->data)  // Inserts node in the right subtree
    {
        root->right =  InsertIntoBST(root->right,d);
    }
    else                // Inserts node in the left subtree  
    {
        root->left =  InsertIntoBST(root->left,d); 
    }
    return root ;
}

void TakeInput(Node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        InsertIntoBST(root,data);
        cin>>data;
    }
}

void InorderTraversal(Node* root)
{
    if(root!=NULL)
    {
        InorderTraversal(root->left);
        cout<<root->data;
        InorderTraversal(root->right);
        
    }
}

int main()
{
    Node* root = NULL;
    cout<<"Enter data in the BST : "<<endl;
    TakeInput(root);
    InorderTraversal(root);
    return 0 ;
}