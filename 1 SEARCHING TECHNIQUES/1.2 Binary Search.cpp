#include<iostream>
using namespace std;

int BinarySearch(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    
    while(start <= end)
    {
        int mid = start + (end - start) / 2;
        if(array[mid] == key)
        {
            return mid;
        }
        else if(key > array[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int key;
    cout << "Enter key to search: ";
    cin >> key;
    int result = BinarySearch(arr, 9, key);
    if(result != -1)
    {
        cout << "Key is found at index: " << result << endl;
    }
    else
    {
        cout << "Key is not found" << endl;
    }
    return 0;
}
