#include<iostream>
using namespace std ; 

void SelectionSort(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
       int min_index = i;
        for(int j =i+1 ;j<size;j++)
        {
            if(array[j]<array[min_index])
            {
                min_index = j ;
            }
        }
       swap(array[min_index],array[i]);
       
    }
}

int main()
{
    int size;
    cout<<"The size of the array is : ";
    cin>>size;
    int* array=new int[size];
    cout<<"Unsorted array is : ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"Sorted array is : ";
    SelectionSort(array,size);
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    delete[] array;
    return 0;
}