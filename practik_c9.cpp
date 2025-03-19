#include <iostream>
using namespace std;

//- - - - - - - - - - - - - - -

template<typename T>
int searchKey(T key, T arr[], short size)
{
	for (short i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}

//- - - - - - - - - - - - - - -

void main()
{
    const short size = 10;
	int arr[size] = { 12, 2, 14, -5, 25, 24, -15, 43, 26, -41 };
	int key;
	cout << "Enter a key: ";
	cin >> key;
	cout << "Index of key = " << searchKey(key, arr, size) << endl;

	float arr2[size] = { 12.4, 2.5, 14.2, -5, 25, 24.12, -15, 43, 26.7, -41.19 };
	float key2;
	cout << "Enter a key: ";
	cin >> key2;
	cout << "Index of key = " << searchKey(key2, arr2, size) << endl;

	char arr3[size] = { 'f', 'r', 't', 'n', 'b', 'o', 'w', 'z', 'x', 'l'};
	char key3;
	cout << "Enter a key: ";
	cin >> key3;
	cout << "Index of key = " << searchKey(key3, arr3, size) << endl;
}