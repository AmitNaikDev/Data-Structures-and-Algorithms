#include<iostream>
using namespace std;
int linearSearch (int array[], int n, int key)
{
  for (int i = 0; i < n; i++)
	{
	  if (array[i] == key)
		{
		  return i;
		}

	}
  return -1;
}

int main ()
{
  int n;
  cout << "Enter the size of the array : ";
  cin >> n;
  int array[n];
  for (int i = 0; i < n; i++)
	{
	  cin >> array[i];
	}
  int key;
  cout << "Enter Key : ";
  cin >> key;
  int result = linearSearch (array, n, key);
  if (result != -1)
	{
	  cout << "Element found at index " << result << endl;
	}
  else
	{
	  cout << "Element not found" << endl;
	}
  return 0;
}
