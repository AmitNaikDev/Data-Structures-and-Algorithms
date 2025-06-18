#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *left;
        Node *right;
        
        Node(int data)
        {
            this->data = data;
            this->left= NULL;
            this->right= NULL;
        }
};

Node BuildTree(Node *root)
{
    cout<<" Enter the data : ";
    int data;
    cin>>data;
    root = new Node(data);
    
    if(data==-1)  //for marking no childrens of the node 
    {
        return NULL ;
    }
    cout<<"Enter data for Node's left child : " ;
    root->left = BuildTree(root->left);
    cout<<endl ;
    cout<<"Enter data for Node's right child : " ;
    root->right = BuildTree(root->right);
    return root ;
}

int main()
{
    Node *root = NULL ;
     
    root = BuildTree(root);     // creating a new tree
}