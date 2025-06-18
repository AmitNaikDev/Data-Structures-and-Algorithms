#include<iostream>
using namespace std;

class Node
{
    public: 
        int data;
        Node  *left;
        Node*right;
        
    Node(int data)
    {
        this->data = data;
        this->left=NULL;
        this->right = NULL;
    }    
};

Node *BuildTree(Node *root)
{
    cout<<"Enter the data : ";
    int data;
    cin>>data;
    if(data== -1)         //When Tree is empty
    {
        return NULL;
    }
    
    root = new Node(data);
    
    cout<<"Enter data for the left child : ";
    root->left = BuildTree(root->left);
    
    cout<<"Enter data for the right child : ";
    root->right = BuildTree(root->right);
    
    return root ;
    
}

void InorderTraversal(Node *root)  // LNR
{
    if(root == NULL)
    {
        return ;
    }
    InorderTraversal(root->left);
    cout<<root->data <<" ";
    InorderTraversal(root->right);
    
}

void PreorderTraversal(Node *root)      //NLR
{                                                       
    if(root == NULL)    
    {
        return ;
    }
    cout<<root->data <<" ";
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
    
}
void PostorderTraversal(Node *root)  // LRN
{
    if(root == NULL)
    {
        return ;
    }
    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    cout<<root->data <<" ";
}

int main()
{
    Node *root = NULL ;
    //building tree ;
    root = Buildtree(root); 
    
     // Perform tree traversals
    cout << "Inorder Traversal: ";
    InorderTraversal(root);
    
    cout << "\nPreorder Traversal: ";
    PreorderTraversal(root);
    
    cout << "\nPostorder Traversal: ";
    PostorderTraversal(root);
    
    return 0;
    
}