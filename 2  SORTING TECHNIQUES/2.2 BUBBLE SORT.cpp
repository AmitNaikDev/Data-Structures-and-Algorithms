#include<iostream>
using namespace std;

void BubbleSort(int array[],int size)
{
    bool swapped;
    for(int i=0;i<size-1;i++)
    {
        swapped =false;
        for(int j = 0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                swap(array[j],array[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
            break;
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
    BubbleSort(array,size);
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    delete[] array;
    return 0;
}