#include<iostream>
using namespace std;

int Partition(int array[] ,int start ,int end)
{
    int pivot = array[end]; // choosing pivot as the last element
    int i = start-1 ; // Index of smaller element
    
    for(int j = start ; j<end ;j++)
    {
        if(array[j]<pivot)
        {
            i++;
            swap(array[i],array[j]);
        }
    }
    swap(array[i+1], array[end]); // Placing the Pivot at it's correct position 
    return i+1 ; // Returning the index of the Pivot
}


void QuickSort(int array[], int start, int end)
{
    if(start>=end)  // this is the base case for recurssion
    {
        return;
    }
    
    int P = Partition(array,start,end); // using partition function to divide the array
    
    QuickSort(array,start,P-1); // This line Recursively sorts the left Sub array
    
    
    QuickSort(array,P+1,end);   // This line Recursively sorts the Right Sub array
    
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    cout<<"Input Array is : " ;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i] ;
    }
    
    QuickSort(arr,0,size-1); //  calling the Quicksort Function to perform sorting of the Input Array
    
    cout<<"Output Array is : " ;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" " ;
    }
    
    cout<<endl ;
    return 0;
}