#include<iostream>
using namespace std;

void Merge(int *array,int start, int end)
{
    int mid = start + (end-start)/2 ;
    
    int length1 = mid - start+ 1; // left subarray
    int length2 = end - mid ;   // right subarray
    
    int *FirstArray = new int[length1];
    int *SecondArray = new int[length2];
    
    // copying the divide array values
    int MainArrayIndex = start ;
    
    // copying the FirstArray
    for(int i=0;i<length1;i++)
    {
        FirstArray[i] = array[MainArrayIndex++];
    }
    
    // copying the SecondArray
    for(int i=0;i<length2;i++)
    {
        SecondArray[i] = array[MainArrayIndex++];
    }
    
    // Merging the two divided arrays
    
    int FirstArrayIndex = 0;
    int SecondArrayIndex = 0 ;
    MainArrayIndex = start ;
    
    while(FirstArrayIndex<length1 && SecondArrayIndex<length2)
    {
        if(FirstArray[FirstArrayIndex]<SecondArray[SecondArrayIndex])
        {
            array[MainArrayIndex++]= FirstArray[FirstArrayIndex++] ;
        }
        else
        {
            
            array[MainArrayIndex++]= SecondArray[SecondArrayIndex++] ;
        }
    }
    
    while(FirstArrayIndex<length1)
    {
     array[MainArrayIndex++] = FirstArray[FirstArrayIndex++]  ;
    }
    
    
    while(SecondArrayIndex<length2)
    {
        array[MainArrayIndex++] = SecondArray[SecondArrayIndex++];
    }
    
    delete[] FirstArray ;
    delete[] SecondArray ;
}

void MergeSort(int array[], int start, int end)
{
    if(start>=end)  // this is the base case for recurssion
    {
        return;
    }
    
    int mid = start +(end-start)/2 ;
    
    MergeSort(array,start,mid); // This line Recursively sorts the left Sub array
    
    MergeSort(array,mid+1,end);   // This line Recursively sorts the Right Sub array
    
    Merge(array,start,end);
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
    
    MergeSort(arr,0,size-1); 
    
    cout<<"Sorted Array is : ";
    for(int i = 0 ;i< size ;i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0 ;
}

