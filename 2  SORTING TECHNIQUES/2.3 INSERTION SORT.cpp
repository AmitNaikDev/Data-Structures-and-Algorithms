#include<iostream>
using namespace std ; 

void InsertionSort(int array[],int size)
{
    for(int i=1;i<size;i++)
    {
        int current = array[i];
        int j = i-1;
        
        while(array[j]>current&&j>=0)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=current;
    }
}
int main()
{
    int size ;
    cin>>size;
    int array[size];
    cout<<"Input Array is : ";
    for(int i = 0 ;i< size ;i++)
    {
        cin>>array[i];
    }
    
    InsertionSort(array,size);
    
    cout<<"Sorted Array is : ";
    for(int i = 0 ;i< size ;i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0 ;
}
